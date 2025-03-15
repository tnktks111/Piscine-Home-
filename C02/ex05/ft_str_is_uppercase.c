/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 20:25:27 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/14 20:25:31 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
	int 	i;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || 'Z' < str[i])
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("%d\n", ft_str_is_uppercase(str));
	char str2[] = "abcdefghijklmnopqrstuvwxyzA";
	printf("%d\n", ft_str_is_uppercase(str2));
	char str3[] = " ";
	printf("%d\n", ft_str_is_uppercase(str3));
	char str4[] = "";
	printf("%d\n", ft_str_is_uppercase(str4));
}