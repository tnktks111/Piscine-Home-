/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 10:52:49 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/15 10:52:51 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

unsigned int 	ft_abs(int nbr)
{
	if (nbr < 0)
		return ((unsigned int)(-nbr));
	else
		return ((unsigned int)nbr);
}

void	ft_convert_to_base(unsigned int nbr, char *base, int base_size)
{
	int i;
	int res[100];

	i = 0;
	if (nbr == 0)
	{
		ft_putchar(base[0]);
		return ;
	}
	while (nbr)
	{
		res[i] = nbr % base_size;
		nbr /= base_size;
		i++;
	}
	while (i--)
		ft_putchar(base[res[i]]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int 	base_size;
	unsigned int 	nbr_unsigned;
	
	base_size = check_isvalid_and_size(base);
	if (base_size == 0)
		return ;
	if (nbr < 0)
		ft_putchar('-');
	
	nbr_unsigned = ft_abs(nbr);
	ft_convert_to_base(nbr_unsigned, base, base_size);
}

int	main(void)
{
	ft_putnbr_base(123456789, "01");
	write(1, "\n", 1);
	ft_putnbr_base(123456789, "ABCD");
	write(1, "\n", 1);
	ft_putnbr_base(2147483647, "0123");
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648, "0123");
	write(1, "\n", 1);
}