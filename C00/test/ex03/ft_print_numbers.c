/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanaka_tsukasa <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 00:44:56 by tanaka_tsukas     #+#    #+#             */
/*   Updated: 2025/03/13 00:46:52 by tanaka_tsukas    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	num;
	num = '0';
	while (num <= '9')
		ft_putchar(nbr++);
}
