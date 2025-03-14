/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 23:03:46 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/13 23:04:16 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

int main(void)
{
    int num;
    int *p1;
    int **p2;
    int ***p3;
    int ****p4;
    int *****p5;
    int ******p6;
    int *******p7;
    int ********p8;
    int *********p9;

    num = 3292;
    p1 = &num;
    p2 = &p1;
    p3 = &p2;
    p4 = &p3;
    p5 = &p4;
    p6 = &p5;
    p7 = &p6;
    p8 = &p7;
    p9 = &p8;
    
    printf("'num' ... adress %p / value %d\n", &num, num);
	printf("'p9' ... adress %p / value %d\n", p9, *********p9);
	ft_ultimate_ft(p9);
	printf("\n");
	printf("After ft_ultimate_ft: \n");
	printf("'p9' ... adress %p / value %d\n", p9, *********p9);
	printf("'num' ... adress %p / value %d\n", &num, num);
}