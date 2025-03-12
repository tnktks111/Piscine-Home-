/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanaka_tsukasa <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 01:01:53 by tanaka_tsukas     #+#    #+#             */
/*   Updated: 2025/03/13 01:05:58 by tanaka_tsukas    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	k = 0;
	while (i < 98)
	{
		k = i + 1;
		while (k < 100)
		{
			ft_putchar(i / 10 + '0');
			ft_putchar(i % 10 + '0');
			ft_putchar(' ');
			ft_putchar(k / 10 + '0');
			ft_putchar(k % 10 + '0');
			if (!(i == 98) && (k == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			k++;
		}
		i++;
	}
	ft_putchar('\n');
}
