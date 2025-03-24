void backtrack(int r, int c, int seen[], int *board[])
{
	int n;
	if (r == 9){
		output(board);
		return;
	}
	if (board[r][c] > 0){
		if (c < 8)
			backtrack(r, c + 1, seen, board);
		else
			backtrack(r + 1, 0, seen, board);
	}
	else{
		n = 0;
		while (n < 9){
			if ((seen[r] & (1 << n)) || (seen[c + 9] & (1 << n) || seen[(r / 3) * 3 + (c / 3) + 18] & (1 << n))){
				n++;
				continue;
			}
			board[r][c] = n + 1;
			seen[r] |= (1 << n);
			seen[c + 9] |= (1 << n);
			seen[(r / 3) * 3 + (c / 3) + 18] |= (1 << n);
			if (c < 8)
				backtrack(r, c + 1, seen, board);
			else
				backtrack(r + 1, 0, seen, board);
			board[r][c] = -1;
			seen[r] ^= (1 << n);
			seen[c + 9] ^= (1 << n);
			seen[(r / 3) * 3 + (c / 3) + 18] ^= (1 << n);
			n++;
		}
	}
}