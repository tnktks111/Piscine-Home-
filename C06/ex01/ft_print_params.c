/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 10:15:11 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/16 10:15:14 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc > 1 && argv[1])
	{
		int i;

		i = 1;
		while (argv[i])
		{
			char *ptr;
			ptr = argv[i];
			while (*ptr)
			{
				write(1, ptr, 1);
				ptr++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
