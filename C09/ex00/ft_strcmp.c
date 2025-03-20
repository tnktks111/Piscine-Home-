/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 09:44:22 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/15 09:44:24 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int 	ft_strcmp(char *s1, char *s2)
{
	int 	i;
	
	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	return s1[i] - s2[i];
}

int 	main()
{
	char s1[] = "abcde";
	char s2[] = "abc";
	printf("%d\n", ft_strcmp(s1, s2));
	return (0);
}
