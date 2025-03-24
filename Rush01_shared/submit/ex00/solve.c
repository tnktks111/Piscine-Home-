#include "shell01.h"

// 再帰的にバックトラッキングで探索
int solve(int row, int col) {
    if (row == size) {
        return (1); // すべて埋めたらヒントを確認
    }
	int next_row;
	int next_col;
	int num;

	if (col == size - 1){
		next_row = row + 1;
		next_col = 0;
	}
	else{
		next_row = row;
		next_col = col + 1;
	}
	
	num = 1;
    while (num <= size) {
        if (is_valid_placement(row, col, num)){
			grid[row][col] = num;
			seen[row] |= (1 << (num - 1));
			seen[size + col] |= (1 << (num - 1));
            if (solve(next_row, next_col))
				return 1;
    		grid[row][col] = 0;
			seen[row] ^= (1 << (num - 1));
			seen[size + col] ^= (1 << (num - 1));
    	}
		num++;
	}
	return (0);
}