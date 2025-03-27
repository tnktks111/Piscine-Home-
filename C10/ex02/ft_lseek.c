#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <errno.h>

// ファイルオフセットを管理するリンクリスト
typedef struct FileEntry {
    int fd;
    off_t offset;
    struct FileEntry *next;
} FileEntry;

FileEntry *file_list = NULL;  // ファイル管理リストの先頭

// 指定した fd のエントリを探し、なければ新規作成
FileEntry *find_or_create_entry(int fd) {
    FileEntry *prev = NULL;
    FileEntry *current = file_list;

    while (current != NULL) {
        if (current->fd == fd) {
            return current;
        }
        prev = current;
        current = current->next;
    }

    // 見つからなかった場合、新しいエントリを作成
    FileEntry *new_entry = (FileEntry *)malloc(sizeof(FileEntry));
    if (!new_entry) {
        perror("malloc error");
        return NULL;
    }
    new_entry->fd = fd;
    new_entry->offset = 0;
    new_entry->next = NULL;

    if (prev) {
        prev->next = new_entry;
    } else {
        file_list = new_entry;  // リストが空なら先頭にする
    }

    return new_entry;
}

off_t get_file_size(int fd) {
    FileEntry *entry = find_or_create_entry(fd);
    if (!entry) return -1;

    // 現在のオフセットを保存
    off_t original_offset = entry->offset;
    off_t total_size = 0;
    char *buffer = (char *)malloc(4096); // 4KB のバッファ
    if (!buffer) {
        perror("malloc error");
        return -1;
    }

    // オフセットを 0 にして読み取り
    my_lseek(fd, 0, SEEK_SET);
    int bytes_read;
    while ((bytes_read = read(fd, buffer, 4096)) > 0) {
        total_size += bytes_read;
    }

    free(buffer);

    // オフセットを元の位置に戻す
    my_lseek(fd, original_offset, SEEK_SET);

    return total_size;
}

// lseek の代替実装
off_t my_lseek(int fd, off_t offset, int whence) {
    FileEntry *entry = find_or_create_entry(fd);
	off_t file_size;
	off_t new_offset;

	file_size = get_file_size(fd);
	if (file_size == -1)
		return -1;
    if (!entry)
		return -1;
    if (whence == SEEK_SET)
        new_offset = offset;
    else if (whence == SEEK_CUR)
		new_offset = entry->offset + offset;
    else if (whence == SEEK_END)
        new_offset = file_size + offset;
    else
        return -1;

    if (new_offset < 0 || new_offset > file_size)
	{
        fprintf(stderr, "lseek: Invalid offset\n");
        return -1;
    }

    entry->offset = new_offset;
    return new_offset;
}

// open の代替
int my_open(const char *pathname, int flags) {
    int fd = open(pathname, flags);
    if (fd < 0) {
        perror("open error");
        return -1;
    }
    find_or_create_entry(fd);  // エントリ作成
    return fd;
}

// close の代替（リストから削除）
int my_close(int fd) {
    FileEntry *current = file_list;
    FileEntry *prev = NULL;

    while (current != NULL) {
        if (current->fd == fd) {
            if (prev) {
                prev->next = current->next;
            } else {
                file_list = current->next;
            }
            free(current);
            return close(fd);
        }
        prev = current;
        current = current->next;
    }
    return -1;  // fd が見つからなかった場合
}

// メモリ解放（終了時に呼び出す）
void cleanup() {
    FileEntry *current = file_list;
    while (current != NULL) {
        FileEntry *next = current->next;
        close(current->fd);
        free(current);
        current = next;
    }
}

// テスト用メイン関数
int main() {
    int fd = my_open("text.txt", O_RDWR | O_CREAT);
    if (fd < 0) {
        return 1;
    }

    char buffer[128];
    my_lseek(fd, 5, SEEK_SET);
    read(fd, buffer, 10);
    buffer[10] = '\0';
    printf("Read: %s\n", buffer);

    my_lseek(fd, -5, SEEK_END);
    read(fd, buffer, 5);
    buffer[5] = '\0';
    printf("Read (from end): %s\n", buffer);

    my_close(fd);
    cleanup();
    return 0;
}
