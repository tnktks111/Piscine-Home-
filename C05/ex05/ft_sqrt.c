/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 02:06:37 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/16 02:06:38 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int square(int nb)
{
	return (nb * nb);
}
int ft_sqrt(int nb)
{
	if (nb <= 0)
		return (0);
	int i;
	i = 0;
	while (square(i) < nb)
	{
		if (i > 46340)
			return (0);
		i++;
	}
	if (square(i) == nb)
		return (i);
	else
		return (0);
}

#include <stdio.h>
int main()
{
	int i;
	i = ft_sqrt(81);
	printf("%d\n", i);
	i = ft_sqrt(15);
	printf("%d\n", i);
	i = ft_sqrt(0);
	printf("%d\n", i);
	i = ft_sqrt(2147483647);
	printf("%d\n", i);
	i = ft_sqrt(2147395600);
	printf("%d\n", i);
}