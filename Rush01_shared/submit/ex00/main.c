#include "shell01.h"

// メイン関数
int main(int argc, char *argv[]) {
	
	//エラーハンドリングはこの辺に
	if (argc != 2) {
        printf("使用方法: %s \"ヒント\"\n", argv[0]);
        return 1;
    }
	input_to_clues(argv[1]);
	if (!clues) {
        printf("無効な入力形式\n");
        return 1;
    }
	grid = (int **)malloc(size * sizeof(int *));
	if(!grid){
		printf("メモリ確保に失敗しました");
		free(clues);
		return (1);
	}
    int i = 0;
	int j = 0;
    while (i < size) {
		grid[i] = (int *)malloc(sizeof(int) * size);
		if (!grid[i]){
			printf("メモリ確保に失敗しました");
			while (i--)
				free(grid[i]);
			free(grid);
			free(clues);
			return (1);
		}
        j = 0;
        while (j < size) {
            grid[i][j] = 0;
            j++;
        }
        i++;
    }
	init_seen();

	if (solve(0, 0)) {
		printf("解:\n");
		print_grid();
	} else {
		printf("解が見つかりませんでした。\n");
	}
	i = 0;
	while (i < size)
		free(grid[i++]);

	free(grid);
	free(clues);
	return 0;
}
