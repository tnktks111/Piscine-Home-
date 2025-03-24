#include "shell01.h"

// 数字を配置できるか判定
int is_valid_placement(int row, int col, int num) {
	if (seen[row] & (1 << (num - 1)) || seen[size + col] & (1 << (num - 1)))
		return (0);
    grid[row][col] = num;
	if (col == size - 1){
		if (count_visible_buildings_left(row) != clues[2 * size + row] || count_visible_buildings_right(row) != clues[3 * size + row]){
			grid[row][col] = 0;
			return (0);
		}
	}
	if (row == size - 1){
		if (count_visible_buildings_up(col) != clues[col] || count_visible_buildings_down(col) != clues[size + col]){
			grid[row][col] = 0;
			return (0);
		}
	}
    return (1);
}