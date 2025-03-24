int count_visible_buildings_down(int **grid, int col, int n){
	int *cur_max = 0;
	int visible_count = 0;
	int i = n - 1;
	while (i >= 0){
		if (grid[i][col] > cur_max){
			visible_count++;
			cur_max = grid[i][col];
		}
		i--;
	}
	return (visible_count);
}