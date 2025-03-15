/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 19:52:17 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/14 19:52:21 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
	int 	i;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || 'z' < str[i])
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	printf("%d\n", ft_str_is_lowercase(str));
	char str2[] = "abcdefghijklmnopqrstuvwxyzA";
	printf("%d\n", ft_str_is_lowercase(str2));
	char str3[] = " ";
	printf("%d\n", ft_str_is_lowercase(str3));
	char str4[] = "";
	printf("%d\n", ft_str_is_lowercase(str4));
}