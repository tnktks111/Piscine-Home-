/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 23:49:56 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/18 23:49:57 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

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
		if (seen[(unsigned char)base[i]] == 1 || base[i] == '+' || base[i] == '-' || base[i] == ' ' || base[i] < 32 || base[i] > 126)
			return (0);
		seen[(unsigned char)base[i]] = 1;
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

		str_to_num[(unsigned char)base[i]] = i;
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
		else if (str_to_num[(unsigned char)str[i]] > -1)
			num = num * base_size + str_to_num[(unsigned char)str[i]];
		else
			break;
		i++;
	}
	return (num * sign);
}

int	convert_digit(int num, char *base, int base_size, char *res, int i)
{
	if (num == -2147483648)
	{
		res[i] = '-';
		i++;
		res[i] = base[2];
		i++;
		num = 147483648;
	}
	if (num < 0)
	{
		res[i] = '-';
		i++;
		num *= -1;
	}
	if (num >= base_size)
	{
		i = convert_digit(num / base_size, base, base_size, res, i);
		i = convert_digit(num % base_size, base, base_size, res, i);
	}
	else
	{
		res[i] = base[num];
		i++;
	}
	return (i);
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int 	num;
	int 	base_size_from;
	int 	base_size_to;
	char 	*res;
	int 	i;

	base_size_from = check_isvalid_and_size(base_from);
	base_size_to = check_isvalid_and_size(base_to);
	if (base_size_from == 0 || base_size_to == 0)
		return (NULL);
	num = ft_atoi_base(nbr, base_from);
	res = (char *)malloc(sizeof(char) * 34);
	if (res == NULL)
		return (NULL);
	i = convert_digit(num, base_to, base_size_to, res, 0);
	res[i] = '\0';
	return (res);
}

int main (void)
{
	char	*hex = "0123456789abcdef";
	char	*oct = "012345678";
	char	*dec = "0123456789";
	char	*bin = "01";
	char	*nbr = "111101110";

	printf("%s to decimal: %s\n", nbr, ft_convert_base(nbr, bin, dec));
	printf("%s to octal: %s\n", nbr, ft_convert_base(nbr, bin, oct));
	printf("%s to hexadecimal: %s\n", nbr, ft_convert_base(nbr, bin, hex));
}
