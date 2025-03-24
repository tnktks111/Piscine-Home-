int *set_seen(int *board[]){
	int *seen = (int *)malloc(sizeof(int) * 27);
	int n;
	int r = 0;
	while(r < 9){
		int c = 0;
		while(c < 9){
			if (board[r][c] > 0){
				n = board[r][c] - 1;
				seen[r] |= (1 << n);
				seen[c + 9] |= (1 << n);
				seen[(r / 3) * 3 + (c / 3) + 18] |= (1 << n);
			}
			c++;
		}
		r++;
	}
	return seen;
}