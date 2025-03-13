/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanaka_tsukasa <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 01:01:53 by tanaka_tsukas     #+#    #+#             */
/*   Updated: 2025/03/13 16:43:10 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		i;
	int		k;

	i = 0;
	k = 0;
	while (i < 100)
	{
		k = i + 1;
		while (k < 100)
		{
			ft_putchar(i / 10 + '0');	
			ft_putchar(i % 10 + '0');	
			ft_putchar(' ');	
			ft_putchar(k / 10 + '0');	
			ft_putchar(k % 10 + '0');	
			if (!(i == 98 && k == 99))
			{	
				write(1, ", ", 2);
			}
			k++;
		}
		i++;
	}
	write(1, "\n", 1);

}
int main(void)
{
	ft_print_comb2();
}
