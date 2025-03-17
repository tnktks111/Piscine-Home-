/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 21:35:31 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/16 21:35:33 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return s1[i] - s2[i];
}

void swap(char **a, char **b)
{
    char *tmp = *a;
    *a = *b;
    *b = tmp;
}

int partition(char *array[], int left, int right) {
	int i = left;
	int j = right + 1;
	char *pivot;
	
	pivot = array[left];
	while (i < j)
	{
		while (++i <= right && ft_strcmp(array[i], pivot) < 0);
		while (--j >= left && ft_strcmp(array[j], pivot) > 0);
		if (i >= j) break;
		swap(&array[i], &array[j]);
	}
	swap(&array[left], &array[j]);
	return j;
}

void quick_sort(char *array[], int left, int right) {
    if (left < right) {
        int q = partition(array, left, right);
        quick_sort(array, left, q - 1);
        quick_sort(array, q + 1, right);
    }
}

int	main(int argc, char *argv[])
{
	int i;
	char *ptr;
	
	if (argc > 1 && argv[1])
	{
		quick_sort(argv, 1, argc - 1);
		i = 1;
		while (argv[i])
		{
			ptr = argv[i];
			while (*ptr)
			{
				write(1, ptr, 1);
				ptr++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
