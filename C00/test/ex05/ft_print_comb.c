/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanaka_tsukasa <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 00:48:01 by tanaka_tsukas     #+#    #+#             */
/*   Updated: 2025/03/13 00:57:45 by tanaka_tsukas    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

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
				ft_putchar(num1);
				ft_putchar(num2);
				ft_putchar(num3);
				if (!(num1 != '7' && num2 && '8' && num3 != '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
	ft_putchar('\n');
}
