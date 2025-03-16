/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 01:54:56 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/16 01:54:58 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

#include <stdio.h>
int main()
{
	int i;
	i = ft_recursive_factorial(5);
	printf("%d\n", i);
	return (0);
}