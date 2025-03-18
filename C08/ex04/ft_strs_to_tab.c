/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 18:13:30 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/18 18:13:31 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*arr;

	arr = (char *) malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		arr[i] = str[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*arr;
	int					i;

	arr = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	if (arr == NULL)
		return (NULL);
	i = 0;

	while (i < ac)
	{
		if (av[i] == NULL)
			return (NULL);

		arr[i].size = ft_strlen(av[i]);
		arr[i].str = ft_strdup(av[i]);
		arr[i].copy = ft_strdup(av[i]);

		if (arr[i].str == NULL || arr[i].copy == NULL)
			return (NULL);
		i++;
	}
	arr[i].str = NULL;
	return (arr);
}
