int is_valid(int *grid[], int *clues, int n){
	int i = 0;
	while (i < n){
		if (clues[n * 2 + i] != count_visible_buildings_left(grid[i], n))
			return(0);
		if (clues[n * 3 + i] != count_visible_buildings_right(grid[i], n))
			return(0);
		i++;
	}
	i = 0;
	while (i < n){
		if (clues[i] != count_visible_buildings_up(grid, i, n))
			return (0);
		if (clues[n * 1 + i] != count_visible_buildings_down(grid, i, n))
			return (0);
		i++;
	}
	return (1);
	
}