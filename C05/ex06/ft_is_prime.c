/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 09:30:24 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/16 09:30:26 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int find_root(int nb)
{
	int i;

	i = 0;
	while (i * i < nb)
	{
		if (i > 46340)
			return (0);
		i++;
	}
	return (i);
}

int ft_is_prime(int nb)
{
	int i;
	int root;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	root = find_root(nb);
	i = 2;
	while (i <= root)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int main()
{
	int i;
	i = ft_is_prime(5);
	printf("%d\n", i);
	i = ft_is_prime(4);
	printf("%d\n", i);
	i = ft_is_prime(0);
	printf("%d\n", i);
	i = ft_is_prime(1);
	printf("%d\n", i);
	i = ft_is_prime(2147483647);
	printf("%d\n", i);
	i = ft_is_prime(2147395600);
	printf("%d\n", i);
	return (0);
}