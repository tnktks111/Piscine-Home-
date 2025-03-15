/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 09:47:59 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/15 09:48:01 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int 	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int 	i;
	
	i = 0;
	while (i < n - 1 && s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	return s1[i] - s2[i];
}

int 	main()
{
	char s1[] = "abcde";
	char s2[] = "abcsjadko";
	printf("%d\n", ft_strncmp(s1, s2, 4));
	printf("%d\n", strncmp(s1, s2, 4));
	return (0);
}
