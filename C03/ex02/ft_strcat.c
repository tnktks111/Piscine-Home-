/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 09:53:32 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/15 09:53:34 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char 	*ft_strcat(char *dest, char *src)
{
	int 	i;
	int 	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
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
	printf("%s\n", ft_strcat(dest, src));
	char dest2[100] = "abc";
	char src2[] = "def";
	printf("%s\n", strcat(dest2, src2));
	return (0);
}
 