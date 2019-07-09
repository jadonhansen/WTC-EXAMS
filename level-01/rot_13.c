/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 11:44:03 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/09 12:06:08 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_lower(char c)
{
	char	b;

	if (c >= 'a' && c <= 'm')
	{
		b = c + 13;
		write(1, &b, 1);
	}
	else
	{
		b = c - 13;
		write(1, &b, 1);
	}
}

void	ft_upper(char c)
{
	char	b;

	if (c >= 'A' && c <= 'M')
	{
		b = c + 13;
		write(1, &b, 1);
	}
	else
	{
		b = c - 13;
		write(1, &b, 1);
	}
}

int		main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				ft_lower(argv[1][i]);
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				ft_upper(argv[1][i]);
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
