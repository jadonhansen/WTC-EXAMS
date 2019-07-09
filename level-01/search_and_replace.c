/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 10:54:03 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/09 11:25:42 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;
	char	c;
	char	replace;

	i = 0;
	if (argc == 4)
	{
		c = argv[2][0];
		replace = argv[3][0];
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == c)
				write(1, &replace, 1);
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
