/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 23:11:49 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/13 23:11:52 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

int	main(void)
{
	int	n1 = 42;
	int	n2 = 24;
	int	*p1 = &n1;
	int	*p2 = &n2;
	
	printf("Before ft_swap: \n");
	printf("Pointer 'p1': address ... %p / value ... %d \n", p1, *p1);
	printf("Pointer 'p2': adress ... %p / value ... %d \n", p2, *p2);
	ft_swap(p1, p2);
	printf("\n");
	printf("After ft_swap: \n");
	printf("Pointer 'p1' : adress ... %p / value ... %d \n", p1, *p1);
	printf("Pointer 'p2' : adress ... %p / value ... %d \n", p2, *p2);
}