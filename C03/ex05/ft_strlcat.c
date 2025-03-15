/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 10:13:22 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/15 10:13:26 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int 	i;
	int 	j;

	i = 0;
	j = 0;
	while (dest[i] && i < size - 1)
	{
		i++;
	}
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	while (src[j])
	{
		i++;
		j++;
	}
	return (i);
}

int main ()
{
	char dest[100] = "abc";
	char src[] = "def";
	printf("%u\n", ft_strlcat(dest, src, 5));
	printf("%s\n", dest);
	char dest2[100] = "abc";
	char src2[] = "def";
	printf("%lu\n", strlcat(dest2, src2, 5));
	printf("%s\n", dest2);
	return (0);
}
