/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 12:54:51 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/23 13:15:13 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	int	num;

	num = 0;
	if (n > 9)
		ft_putnbr(n / 10);
	num = n % 10 + '0';
	write(1, &num, 1);
}

int		main(int argc, char **argv)
{
	if (argc > 1 && argv[0])
		ft_putnbr(argc - 1);
	write(1, "\n", 1);
	return (0);
}
