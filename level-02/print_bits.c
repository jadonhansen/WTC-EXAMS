/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:44:50 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/15 17:06:14 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;

	i = 128;
	while (octet >= 0 && i)
	{
		if (octet / i)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		if (octet / i)
			octet = octet - i;
		i = i / 2;
	}
}

//DO NOT INCLUDE ANYTHING BELOW

int		main(void)
{
	int n = 2;
	print_bits(n);
	write(1, "\n", 1);
	return (0);
}
