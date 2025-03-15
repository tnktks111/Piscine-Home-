/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 20:20:03 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/14 20:20:04 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char 	*ft_strupcase(char *str)
{
	int 	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}

	return (str);
}

int main()
{
	char str[] = "Hello";
	ft_strupcase(str);
	printf("%s\n", str);
	char str2[] = "Hello World1";
	ft_strupcase(str2);
	printf("%s\n", str2);
	char str3[] = "HELLO";
	ft_strupcase(str3);
	printf("%s\n", str3);
	char str4[] = "";
	ft_strupcase(str4);
	printf("%s\n", str4);
	return (0);
}
