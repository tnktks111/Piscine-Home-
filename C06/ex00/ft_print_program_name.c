/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 10:02:42 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/16 10:02:44 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc > 0 && argv[0])
	{
		char *ptr;

		ptr = argv[0];
		while (*ptr)
		{
			write(1, ptr, 1);
			ptr++;
		}
	}
	write(1, "\n", 1);
	return (0);
}