/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 15:07:30 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/22 16:09:24 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_pgcd(int one, int two)
{
	int max_den;

	max_den = 0;
	if (one > two)
		max_den = two;
	else
		max_den = one;
	while (max_den > 0)
	{
		if ((one % max_den == 0) && (two % max_den == 0))
			break ;
		max_den--;
	}
	printf("%d", max_den);
}

int		main(int argc, char **argv)
{
	int	one;
	int	two;

	if (argc == 3)
	{
		one = atoi(argv[1]);
		two = atoi(argv[2]);
		ft_pgcd(one, two);
	}
	printf("%c", '\n');
	return (0);
}
