/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 14:05:03 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/15 14:25:25 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	upper(char c)
{
	char	z;

	z = 'Z' - (c - 'A');
	write(1, &z, 1);
}

void	lower(char c)
{
	char	z;

	z = 'z' - (c - 'a');
	write(1, &z, 1);
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
				lower(argv[1][i]);
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				upper(argv[1][i]);
			else
				write (1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
