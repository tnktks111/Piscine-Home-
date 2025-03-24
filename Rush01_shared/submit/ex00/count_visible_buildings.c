#include "shell01.h"

// `index` を使ってビルの見える数を数える
int count_visible_buildings_up(int col) {
    int cur_max = 0;
	int count = 0;
	int i = 0;
    while (i < size) {
        if (grid[i][col] > cur_max) {
            cur_max = grid[i][col];
            count++;
		}
		if (grid[i][col] == size)
			return count;
		if (i < size - 1 && grid[i][col] == size - 1)
			return (count + 1);
		i++;
    }
    return count;
}

int count_visible_buildings_down(int col) {
    int cur_max = 0;
	int count = 0;
	int i = size - 1;
    while (i >= 0) {
        if (grid[i][col] > cur_max) {
            cur_max = grid[i][col];
            count++;
		}
		if (grid[i][col] == size)
			return count;
		if (i > 0 && grid[i][col] == size - 1)
			return (count + 1);
		i--;
    }
    return count;
}

int count_visible_buildings_left(int row) {
    int cur_max = 0;
	int count = 0;
	int i = 0;
    while (i < size) {
        if (grid[row][i] > cur_max) {
            cur_max = grid[row][i];
            count++;
        }
		if (grid[row][i] == size)
			return count;
		if (i < size - 1 && grid[row][i] == size - 1)
			return (count + 1);
		i++;
    }
    return count;
}

int count_visible_buildings_right(int row) {
    int cur_max = 0;
	int count = 0;
	int i = size - 1;
    while (i >= 0) {
        if (grid[row][i] > cur_max) {
            cur_max = grid[row][i];
            count++;
        }
		if (grid[row][i] == size)
			return count;
		if (i > 0 && grid[row][i] == size - 1)
			return (count + 1);
		i--;
    }
    return count;
}