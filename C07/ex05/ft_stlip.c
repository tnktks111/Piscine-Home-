/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stlip.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 22:41:19 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/18 22:41:21 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int 	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int count_words(char *str, int *seen)
{
	int count;
	char *cur;

	count = 0;
	cur = str;
	while (*cur)
	{
		while(*cur && !(seen[(unsigned int)*cur]))
			cur++;
		if (*cur)
		{
			count++;
			while(*cur && seen[(unsigned int)*cur])
				cur++;
		}
	}
	return (count);
}

char **create_list(char **res, int count, char *str, int *seen)
{
	char *cur;
	char *head;
	int i;

	cur = str;
	i = 0;
	while (i < count)
	{
		while(*cur && seen[(unsigned int)*cur])
			cur++;
		head = cur;
		while(*cur && !(seen[(unsigned int)*cur]))
			cur++;
		res[i] = (char *)malloc(sizeof(char) * (cur - head + 1));
		if (!res[i])
			return (NULL);
		ft_strncpy(res[i], head, cur - head);
		res[i++][cur - head] = '\0';
	}
	res[i] = NULL;
	return (res);
}

char **ft_split(char *str, char *charset)
{
	int seen[256];
	int i;
	int count;
	char *cur;
	char **res;

	i = 0;
	while (i < 256)
		seen[i++] = 0;
	cur = charset;
	while (*cur)
		seen[(unsigned int)*cur++] = 1;
	cur = str;
	count = count_words(str, seen);
	if (count == 0)
		return (NULL);
	res = (char **)malloc(sizeof(char * ) * (count + 1));
	if (!res)
		return (NULL);
	res = create_list(res, count, str, seen);
	return (res);
}

#include <stdio.h>
int	main(void)
{
	char	*str = "Words to.be/splitted*in@six";
	char	*sep = "./*@! ";
	char	**words = ft_split(str, sep);
	int i = 0;

	printf("Before: %s\nAfter: \n", str);
	while (words[i])
	{
		printf("%s\n", words[i]);
		free(words[i]);
		i++;
	}
	free(words);
}
