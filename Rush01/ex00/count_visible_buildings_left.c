int count_visible_buildings_left(int *sequence, int n){
	int *cur_max = 0;
	int visible_count = 0;
	int i = 0;
	while (i < n){
		if (sequence[i] > cur_max){
			visible_count++;
			cur_max = sequence[i];
		}
		i++;
	}
	return (visible_count);
}