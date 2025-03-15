/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 10:40:07 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/15 10:40:08 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int 	ft_atoi(char *str)
{
	int 	i;
	int 	sign;
	int 	num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i])
	{
		if (str[i] == '-')
			sign *= -1;
		else if (str[i] == '+')
			;
		else if (str[i] >= '0' && str[i] <= '9')
			num = num * 10 + str[i] - '0';
		else if (str[i] < '0' || str[i] > '9')
			break;
		i++;
	}
	return (num * sign);
}

int main()
{
	char str[] = "---+--+1234ab567";
	printf("%d\n", ft_atoi(str));
	return (0);
}