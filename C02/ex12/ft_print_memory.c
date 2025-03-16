/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 09:30:09 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/15 09:30:10 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void 	ft_print_addr(void *ptr)
{
	char	*hex;
	char	buffer[16];
	unsigned long	addr;
	int 	i;

	hex = "0123456789abcdef";
	addr = (unsigned long)ptr;
	i = 15;

	while (i >= 0)
	{
		buffer[i--] = hex[addr % 16];
		addr /= 16;
	}
	write(1, buffer, 16);
	write(1, ": ", 2);
}

void ft_print_hex(void *addr, int n, unsigned int size)
{
	unsigned int j = 0;
	while (j < 16)
	{
		if (j + n * 16 < size)
		{
			if (j % 16 == 0)
				ft_print_addr(addr + n * 16 + j);
			ft_putchar("0123456789abcdef"[(*(unsigned char *)(addr + n * 16 + j)) / 16]);
			ft_putchar("0123456789abcdef"[(*(unsigned char *)(addr + n * 16 + j)) % 16]);
		}
		else
			write(1, "  ", 2);
		if (j % 2 == 1)
			ft_putchar(' ');
		j++;
	}
}

void ft_print_ascii(void *addr, int n, unsigned int size)
{
    unsigned int j = 0;
    while (j < 16 && j + n * 16 < size)
	{
		if (*(char *)(addr + n * 16 + j) >= 32 && *(char *)(addr + n * 16 + j) <= 126)
			ft_putchar(*(char *)(addr + n * 16 + j));
		else
			ft_putchar('.');
		j++;
	}
	ft_putchar('\n');
}

void *ft_print_memory(void *addr, unsigned int size)
{
	int line;
	int i;

	line = size / 16;
	i = 0;
	while (i < line)
	{
		ft_print_hex(addr, i, size);
		ft_print_ascii(addr, i, size);
		i++;
	}
	if (size % 16 != 0)
	{
		ft_print_hex(addr, i, size);
		ft_print_ascii(addr, i, size);
	}
	return (addr);
}

#include <stdio.h>
int main()
{
	int i = 0;
	char str[] = "Bonjour les aminches\t\n\tc  est fou.tout.ce qu on peut faire avec...print_memory....lol.lol.B";
	while (str[i++])
		;
	printf("%d\n", i);
	ft_print_memory(str, i);
	return (0);
}