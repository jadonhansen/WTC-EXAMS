/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 12:56:28 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/09 13:06:51 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_upper(char c)
{
	char	b;

	if (c >= 'A' && c <= 'Y')
		b = c + 1;
	else
		b = 'A';
	write(1, &b, 1);
}

void	ft_lower(char c)
{
	char	b;

	if (c >= 'a' && c <= 'y')
		b = c + 1;
	else
		b = 'a';
	write(1, &b, 1);
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
