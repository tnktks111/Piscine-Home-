void output(int **board){
	int r = 0;
	int c;
	char output[18];
	while (r < 9){
		c = 0;
		while(c < 17){ 
			if (c % 2 == 1)
				output[c] = ' ';
			else
				output[c] = '0' + board[r][c / 2];
			c++;
		}
		output[c] = '\n';
		write(1, output, 18);
		r++;
	}
}