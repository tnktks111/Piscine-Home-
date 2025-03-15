/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 10:29:57 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/15 10:29:59 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int 	ft_strlen(char *str)
{
	int 	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int main()
{
	char str[] = "abcde";
	printf("%d\n", ft_strlen(str));
	return (0);
}