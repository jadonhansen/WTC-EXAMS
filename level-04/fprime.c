/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 11:53:47 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/30 13:00:58 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	fprime(int n)
{
	int	prime;

	if (n == 1)
		printf("%d", 1);
	else if (n < 0)
		return ;
	else
	{
		prime = 2;
		while (n > 1)
		{
			if (n % prime == 0)
			{
				printf("%d", prime);
				n = n / prime;
				if (n > 1)
					printf("%c", '*');
				prime--;
			}
			prime++;
		}
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2 && *argv[1])
		fprime(atoi(argv[1]));
	printf("%c", '\n');
	return (0);
}
