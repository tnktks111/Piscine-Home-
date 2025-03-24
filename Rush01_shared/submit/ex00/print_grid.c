#include "shell01.h"
// 盤面を表示
void print_grid() {
    int i = 0;
	int j = 0;
    while (i < size) {
        j = 0;
        while (j < size) {
            printf("%d ", grid[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}