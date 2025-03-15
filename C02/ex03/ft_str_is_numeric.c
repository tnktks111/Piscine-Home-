/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 19:48:19 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/14 19:48:24 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int 	ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || '9' < str[i])
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	char str[] = "1234567890";
	printf("%d\n", ft_str_is_numeric(str));
	char str2[] = "1234567890a";
	printf("%d\n", ft_str_is_numeric(str2));
	char str3[] = " ";
	printf("%d\n", ft_str_is_numeric(str3));
	char str4[] = "";
	printf("%d\n", ft_str_is_numeric(str4));
}