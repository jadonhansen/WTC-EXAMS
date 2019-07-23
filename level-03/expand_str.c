/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 16:41:39 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/23 11:09:00 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	expand(char *str)
{
	int	i;
	int	end;

	end = 0;
	i = 0;
	while (str[end])
		end++;
	end--;
	while (str[end] == ' ' || str[end] == '\t')
		end--;
	while (i <= end)
	{
		while (str[i] != ' ' && str[i] != '\t' && i <= end)
			write(1, &str[i++], 1);
		if (i > 0 && i <= end)
		{
			write(1, " ", 1);
			write(1, " ", 1);
			write(1, " ", 1);
		}
		while ((str[i] == ' ' || str[i] == '\t') && i <= end)
			i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		expand(argv[1]);
	write(1, "\n", 1);
	return (0);
}
