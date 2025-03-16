/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 01:40:06 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/16 01:40:09 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	backtrack(int n, int r, char board[10][11])
{
	if (r == n)
	{}
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (r[j] == i || r[j] == i + j || r[j] == i - j)
				break;
			j++;
		}
		if (j == 10)
		{
			r[i] = i;
			backtrack(r + 1);
			if (r[9] != -1)
			{
				write(1, r, 10);
				write(1, "\n", 1);
			}
		}
		i++;
	}
}


int		ft_ten_queens_puzzle(void)
{
	int col[10];
	int pos_dieg[20];
	int neg_dieg[20];
	int res[10];


}