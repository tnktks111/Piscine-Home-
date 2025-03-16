void ft_putchar(char c);

void rush(int x, int y)
{
	int row;
	int col;

	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			if ((row == 0 && col == 0))
				ft_putchar('/');
			else if ((row == 0 && col == x - 1))
				ft_putchar('\\');
			else if ((row == y - 1 && col == 0))
				ft_putchar('\\');
			else if ((row == y - 1 && col == x - 1))
				ft_putchar('/');
			else if (row == 0 || row == y - 1)
				ft_putchar('*');
			else if (col == 0 || col == x - 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
