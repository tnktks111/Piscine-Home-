/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanaka_tsukasa <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 00:58:53 by tanaka_tsukas     #+#    #+#             */
/*   Updated: 2025/03/13 12:59:25 by tanaka_tsukas    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}
int main (void)
{
	ft_is_negative(1);
	printf("\n");
	ft_is_negative(0);
	printf("\n");
	ft_is_negative(-1);
	printf("\n");
}
