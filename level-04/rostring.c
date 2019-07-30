/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 13:06:43 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/30 13:45:46 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ro(char *s)
{
	int	i;
	int	save;

	i = 0;
	while ((s[i] == ' ' || s[i] == '\t') && s[i] != '\0')
		i++;
	save = i;
	while (s[i] != ' ' && s[i] != '\t' && s[i] != '\0')
		i++;
	while (s[i] != '\0')
	{
		while ((s[i] == ' ' || s[i] == '\t') && s[i] != '\0')
			i++;
		while (s[i] != ' ' && s[i] != '\t' && s[i] != '\0')
			write(1, &s[i++], 1);
		if (s[i] != '\0')
			write(1, " ", 1);
	}
	while (s[save] != ' ' && s[save] != '\t' && s[save] != '\0')
		write(1, &s[save++], 1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ro(argv[1]);
	write(1, "\n", 1);
	return (0);
}
