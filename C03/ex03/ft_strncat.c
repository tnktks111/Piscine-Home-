/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 10:00:17 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/15 10:00:20 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char 	*ft_strncat(char *dest, char *src, unsigned int n)
{
	int 	i;
	int 	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (j < n && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char dest[100] = "abc";
	char src[] = "def";
	printf("%s\n", ft_strncat(dest, src, 2));
	char dest2[100] = "abc";
	char src2[] = "def";
	printf("%s\n", strncat(dest2, src2, 2));
	return (0);
}