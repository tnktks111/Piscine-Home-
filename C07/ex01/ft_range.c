/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 23:33:34 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/16 23:33:35 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int **range, int min, int max)
{
	int *array;
	int i;

	if (min >= max)
	{
		return (NULL);
	}
	array = (int *)malloc(sizeof(int) * (max - min));
	if (array == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}