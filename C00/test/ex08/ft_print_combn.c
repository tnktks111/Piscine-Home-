/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanaka_tsukasa <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 01:11:33 by tanaka_tsukas     #+#    #+#             */
/*   Updated: 2025/03/13 01:20:40 by tanaka_tsukas    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

static void generate_next_combination(int *arr, int col, int n)
{
	int	i;

	while (col >= 0)
	{
		while (arr[col] == (10 - (n - col)) && col >= 0)
			col -= 1;
		if (col < 0)
			break ;
		arr[col] ++ 1;
		i = col + 1;
		while (i < n)
		{
			arr[i] = arr[i - 1] + 1;
			i++;
		}

		ft_putchar(',');
		ft_putchar(' ');
		
		i = 0;
		while (i < n)
			ft_putchar(arr[i++] + '0');
	}
}

void	ft_print_combn(int n)
{
	static int	arr[10];
	int	i;

	if (n <= 0 || n > 10)
		return ;

	i = 0;
	while (i < n)
	{
		arr[i] = i;
		i++;
	}

	i = 0;
	while (i < n)
		ft_putchar(arr[i++] + '0');
	ft_me_cago_en_norminette(arr, n - 1, n);
	ft_putchar('\n');
}
