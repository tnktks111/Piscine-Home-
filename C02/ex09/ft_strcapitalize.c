/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 20:46:30 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/14 20:46:35 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char 	*ft_strcapitalize(char *str)
{
	int 	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z' && (i == 0 || str[i - 1] == 32 || str[i - 1] == 43 || str[i - 1] == 45))
		{
			str[i] -= 32;
		}
		else if ('A' <= str[i] && str[i] <= 'Z' && i != 0 && (str[i - 1] != 32 && str[i - 1] != 43 && str[i - 1] != 45))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(str);
	printf("%s\n", str);
	char str2[] = "Hello, how are you? I am fine, thank you. And you?";
	ft_strcapitalize(str2);
	printf("%s\n", str2);
	char str3[] = " ";
	ft_strcapitalize(str3);
	printf("%s\n", str3);
	char str4[] = "";
	ft_strcapitalize(str4);
	printf("%s\n", str4);
	return (0);
}
			