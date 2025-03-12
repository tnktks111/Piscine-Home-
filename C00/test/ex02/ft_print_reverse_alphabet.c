/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanaka_tsukasa <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 00:42:13 by tanaka_tsukas     #+#    #+#             */
/*   Updated: 2025/03/13 00:43:05 by tanaka_tsukas    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char	ltr;

	ltr = 'z';
	while (ltr >= 'a')
		ft_putchar(ltr--);
}
