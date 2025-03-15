/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 11:41:33 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/15 11:41:34 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

int 	check_isvalid_and_size(char *base)
{
	int 	i;
	int 	seen[256];

	i = 0;
	while (i < 256)
		seen[i++] = 0;
	i = 0;
	while (base[i])
	{
		if (seen[base[i]] == 1 || base[i] == '+' || base[i] == '-' || base[i] == ' ' || base[i] < 32 || base[i] > 126)
			return (0);
		seen[base[i]] = 1;
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

int 	ft_atoi_base(char *str, char *base)
{
	int 	i;
	int 	sign;
	int 	num;
	int 	base_size;
	int 	str_to_num[256];
	
	i = 0;
	sign = 1;
	num = 0;
	base_size = check_isvalid_and_size(base);
	if (base_size == 0)
		return (0);
	i = 0;
	while (i < 256)
	{
		str_to_num[i] = -1;
		i++;
	}
	i = 0;
	while (i < base_size)
	{

		str_to_num[base[i]] = i;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (str[i] == '-')
			sign *= -1;
		else if (str[i] == '+')
			;
		else if (str[i] == ' ')
			;
		else if (str_to_num[str[i]] > -1)
			num = num * base_size + str_to_num[str[i]];
		else
			break;
		i++;
	}
	return (num * sign);
}

int main()
{
	char str[] = "  -+--abcd12efg";
	char base[] = "abcd";
	printf("%d\n", ft_atoi_base(str, base));
	return (0);
}