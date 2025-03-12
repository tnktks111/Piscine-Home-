/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanaka_tsukasa <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 00:38:45 by tanaka_tsukas     #+#    #+#             */
/*   Updated: 2025/03/13 00:40:09 by tanaka_tsukas    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	ltr;

	ltr = 'a';
	while (ltr <= 'z')
		ft_putchar(ltr++);
}
