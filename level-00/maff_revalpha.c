/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 12:42:23 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/08 13:00:09 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int	i;

	i = 122;
	while (i > 97)
	{
		if ((i % 2) == 0)
			ft_putchar(i);
		else
			ft_putchar(i - 32);
		i--;
	}
	write(1, "\n", 1);
	return (0);
}
