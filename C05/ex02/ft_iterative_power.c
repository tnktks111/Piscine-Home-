/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 01:57:54 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/16 01:57:56 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_iterative_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	int res;
	res = 1;
	while (power > 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}

#include <stdio.h>
int main()
{
	int i;
	i = ft_iterative_power(5, 3);
	printf("%d\n", i);
	return (0);
}
