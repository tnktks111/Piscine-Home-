/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanaka <ttanaka@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 01:51:59 by ttanaka           #+#    #+#             */
/*   Updated: 2025/03/16 01:52:00 by ttanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_iterative_factorial(int nb)
{
	int 	i;
	int 	res;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	res = 1;
	while (i <= nb)
	{
		res *= i;
		i++;
	}
	return (res);
}
