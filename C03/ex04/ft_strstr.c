/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 10:06:44 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/15 10:06:54 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char 	*ft_strstr(char *str, char *to_find)
{
	int 	i;
	int 	j;

	i = 0;
	j = 0;
	if (!to_find[0])
		return (str);
	while (str[i])
	{
		while (str[i] == to_find[j])
		{
			if (!to_find[j + 1])
				return (&str[i - j]);
			i++;
			j++;
		}
		i = i - j + 1;
		j = 0;
	}
	return (0);
}

int main()
{
	char str[] = "abcde";
	char to_find[] = "cd";
	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
	return (0);
}