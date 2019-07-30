/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 13:48:53 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/30 15:18:34 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int			main(int argc, char **argv)
{
	char	*str;
	int		tab[4096];
	int		*ptr;
	int		i;
	int		loop;

	ptr = tab;
	i = 0;
	if (argc == 2)
	{
		str = argv[1];
		while (str[i])
		{
			if (str[i] == '+')
				++(*ptr);
			else if (str[i] == '-')
				--(*ptr);
			else if (str[i] == '>')
				ptr++;
			else if (str[i] == '<')
				ptr--;
			else if (str[i] == '.')
				write(1, ptr, 1);
			else if (str[i] == '[' && *ptr == 0)
			{
				loop = 1;
				while (loop != 0)
				{
					i++;
					if (str[i] == '[')
						loop++;
					if (str[i] == ']')
						loop--;
				}
			}
			else if (str[i] == ']' && *ptr != 0)
			{
				loop = 1;
				while (loop != 0)
				{
					i--;
					if (str[i] == ']')
						loop++;
					if (str[i] == '[')
						loop--;
				}
			}
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
