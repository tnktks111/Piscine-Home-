/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:54:45 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/18 16:54:47 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_abs.h"

int	main(void)
{
	int i;

	i = -42;
	printf("ABS(%d) = %d\n", i, ABS(i));
	i = 42;
	printf("ABS(%d) = %d\n", i, ABS(i));
	i = 0;
	printf("ABS(%d) = %d\n", i, ABS(i));
	return (0);
}