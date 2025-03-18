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

#include <unistd.h>

void	backtrack(int row, int col[], int pos_diag[], int neg_diag[], char board[], int *total)
{
	int c;
	if (row == 10)
	{
		write(1, board, 10);
		write(1, "\n", 1);
		(*total)++;
		return ;
	}
	c = 0;
	while (c < 10)
	{
		if (!col[c] && !pos_diag[row + c] && !neg_diag[9 + row - c])
		{
			col[c] = 1;
			pos_diag[row + c] = 1;
			neg_diag[9 + row - c] = 1;
			board[row] = c + '0';
			backtrack(row + 1, col, pos_diag, neg_diag, board, total);
			col[c] = 0;
			pos_diag[row + c] = 0;
			neg_diag[9 + row - c] = 0;
		}
		c++;
	}
}

int ft_ten_queens_puzzle(void)
{
	int col[10];
	int pos_diag[19];
	int neg_diag[19];
	char board[11];
	int total;
	int i;

	i = 0;
	while (i < 10)
		col[i++] = 0;
	i = 0;
	while (i < 19)
	{
		pos_diag[i] = 0;
		neg_diag[i++] = 0;
	}
	i = 0;
	while (i < 10)
		board[i++] = '0';
	board[i] = '\0';
	total = 0;
	backtrack(0, col, pos_diag, neg_diag, board, &total);
	return (total);
}

#include <stdio.h>
int main(void)
{
	int n = ft_ten_queens_puzzle();
	printf("%d\n", n);
	return (0);
}