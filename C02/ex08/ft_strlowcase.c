/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 20:29:09 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/14 20:29:10 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

char 	*ft_strlowcase(char *str)
{
	int 	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}

	return (str);
}

int main()
{
	char str[] = "hello";
	ft_strlowcase(str);
	printf("%s\n", str);
	char str2[] = "helLo wOrld1";
	ft_strlowcase(str2);
	printf("%s\n", str2);
	char str3[] = "HELL389203183O";
	ft_strlowcase(str3);
	printf("%s\n", str3);
	char str4[] = "";
	ft_strlowcase(str4);
	printf("%s\n", str4);
	return (0);
}

