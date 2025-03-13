/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanaka_tsukasa <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 00:48:01 by tanaka_tsukas     #+#    #+#             */
/*   Updated: 2025/03/13 13:06:43 by tanaka_tsukas    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	num1;
	char	num2;
	char	num3;
	
	num1 = '0' - 1;
	while (++num1 <= '7')
	{
		num2 = num1;
		while (++num2 <= '8')
		{
			num3 = num2;
			while (++num3 <= '9')
			{
				write(1, &num1, 1);
				write(1, &num2, 1);
				write(1, &num3, 1);
				if (!(num1 == '7' && num2 == '8' && num3 == '9'))
				{
					write(1, ", ", 2);
				}
			}
		}
	}
	write(1, "\n", 1);
}
int main(void)
{
	ft_print_comb();
}
