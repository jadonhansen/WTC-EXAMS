/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 14:40:13 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/15 15:37:11 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *line)
{
	int		i;

	i = 0;
	while (line[i] != '\0')
	{
		write(1, &line[i], 1);
		i++;
	}
}

void	check(char *str, char *line)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == line[i])
			i++;
		else
			return ;
	}
	ft_putstr(line);
}

void	wdmatch(char *str1, char *str2)
{
	int		i;
	int		j;
	char	line[10000];

	i = 0;
	j = 0;
	while (str1[i] != '\0')
	{
		while (str2[j] != '\0')
		{
			if (str1[i] == str2[j])
			{
				line[i] = str1[i];
				break;
			}
			j++;
		}
		i++;
	}
	check(str1, line);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		wdmatch(argv[1], argv[2]);	
	}
	write (1, "\n", 1);
	return (0);
}
