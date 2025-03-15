/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 20:56:57 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/14 20:57:11 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dst, const char *src, unsigned int size)
{
	int i;

	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}

int main(void)
{
	char src[] = "Hello, World!";
	char dst[20];
	int res;

	strlcpy(dst, src, 5);
	printf("dst: %s\n", dst);
	printf("src: %s\n", src);
	res = ft_strlcpy(dst, src, 5);
	printf("res: %d\n", res);
	printf("dst: %s\n", dst);
	return (0);
}