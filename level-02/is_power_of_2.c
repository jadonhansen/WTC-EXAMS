/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 12:19:50 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/16 12:46:07 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_power_of_2(unsigned int n)
{
	unsigned int	num;

	num = 0;
	while (num <= n)
	{
		if ((num * num) == n)
			return (1);
		num++;
	}
	return (0);
}

//DO NOT INCLUDE ANYTHING ELSE

#include <stdio.h>

int		main(void)
{
	unsigned int	i;

	i = 25;
	printf("%d", is_power_of_2(i));
	return (0);
}
