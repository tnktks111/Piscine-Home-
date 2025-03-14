/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 14:05:22 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/14 14:05:26 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

int    partition (int array[], int left, int right) {
    int i;
    int j;
    int pivot;

    i = left;
    j = right + 1;
    pivot = left;
    while (i < j)
    {
        while (array[++i] < array[pivot] && i != right);
        while (array[pivot] < array[--j] && j != left);
        if (i >= j)
            break;
        swap(&array[i], &array[j]);
    }
    swap(&array[pivot], &array[j]);
    return j;
}

void   quick_sort(int array[], int left, int right)
{
    int q;

    if (left < right)
    {
        q = partition(array, left, right);
        quick_sort(array, left, q - 1);
        quick_sort(array, q + 1, right);
    }
}

void    ft_sort_int_tab(int *tab, int size)
{
    quick_sort(tab, 0, size - 1);
}

int main(void)
{
    int tab[8] = {5, 4, 3, 2, 1, 2389, 32, 42};
    int size = 8;
    ft_sort_int_tab(tab, size);
    printf("Sorted tab: ");
    int i = 0;
    while (i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
    return (0);
}