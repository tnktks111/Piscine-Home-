int count_visible_buildings_up(int **grid, int col, int n){
	int *cur_max = 0;
	int visible_count = 0;
	int i = 0;
	while (i < n){
		if (grid[i][col] > cur_max){
			visible_count++;
			cur_max = grid[i][col];
		}
		i++;
	}
	return (visible_count);
}