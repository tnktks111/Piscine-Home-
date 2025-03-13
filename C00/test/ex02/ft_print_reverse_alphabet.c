/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanaka_tsukasa <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 00:42:13 by tanaka_tsukas     #+#    #+#             */
/*   Updated: 2025/03/13 12:52:42 by tanaka_tsukas    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	ltr;

	ltr = 'z';
	while (ltr >= 'a')
	{
		write(1, &ltr, 1);
		ltr--;
	}
}

int main(void)
{
	ft_print_reverse_alphabet();
}
