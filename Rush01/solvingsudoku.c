int seen[27];
int i;
int num;
int group;
int board;

i = 0;
while (i < 27)
	seen[i] = 0;

void backtrack(int r, int c, int seen[])
{
	int n;
	if (r == 10)
		//出力操作
		return ;
	n = 0;
	while (n < 9)
	{
		if (seen[r] & (1 << n)) || (seen[c + 9] & (1 << n) || seen[(r / 3) * 3 + (c / 3) + 18] & (1 << n))
			return ;
		//boardに対して働きかける操作
		seen[r] |= (1 << n)
		seen[c + 9] |= (1 << n)
		seen[(r / 3) * 3 + (c / 3) + 18] |= (1 << n)
		if (c == 8)
			return backtrack(r + 1, c, seen);
		else
			return backtrack(r + 1, c + 1, seen);
		seen[r] ^= (1 << n)
		seen[c + 9] ^= (1 << n)
		seen[(r / 3) * 3 + (c / 3) + 18] ^= (1 << n)
	}
}