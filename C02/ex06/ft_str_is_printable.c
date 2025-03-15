/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 19:56:51 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/14 19:56:55 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int 	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || 126 < str[i])
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char str[] = " ";
	printf("%d\n", ft_str_is_printable(str));
	char str2[] = "Hello";
	printf("%d\n", ft_str_is_printable(str2));
	char str3[] = "Hello\n";
	printf("%d\n", ft_str_is_printable(str3));
	char str4[] = "";
	printf("%d\n", ft_str_is_printable(str4));
	return (0);
}
