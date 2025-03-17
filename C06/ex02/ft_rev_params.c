/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 10:21:40 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/16 10:21:42 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc > 1 && argv[1])
	{
		int i;
		char *ptr;

		i = argc - 1;
		while (i > 0)
		{
			ptr = argv[i];
			while (*ptr)
			{
				write(1, ptr, 1);
				ptr++;
			}
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}