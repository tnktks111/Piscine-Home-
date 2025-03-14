/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:37:21 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/14 13:37:31 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *a / *b;
    *b = tmp % *b;
}

int main(void)
{
    int x = 10;
    int y = 3;
    printf("Before ft_ultimate_div_mod: \n");
    printf("x: %d, y: %d\n", x, y);
    ft_ultimate_div_mod(&x, &y);
    printf("After ft_ultimate_div_mod: \n");
    printf("x: %d,y: %d\n", x, y);
}