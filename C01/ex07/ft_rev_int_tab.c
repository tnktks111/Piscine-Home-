/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:53:57 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/14 13:54:04 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int i = 0;
    int tmp;
    while (i < size / 2)
    {
        tmp = *(tab + i);
        *(tab + i) = *(tab + size - 1 - i);
        *(tab + size - 1 - i) = tmp;
        i++;
    }
}
int main(void)
{
    int tab[5] = {1, 2, 3, 4, 5};
    int size = 5;
    ft_rev_int_tab(tab, size);
    printf("Reversed tab: ");
    int i = 0;
    while (i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
    return (0);
}
