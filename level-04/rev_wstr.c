/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 16:58:33 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/29 17:42:41 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	rev(char *s)
{
	int	i;
	int	prev;

	prev = 0;
	i = 0;
	while (s[i] != '\0')
		i++;
	i--;
	while (i > 0)
	{
		while (((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) && i > 0)
			i--;
		prev = i;
		if (i > 0)
			i++;
		while (s[i] != '\0' && s[i] != ' ' && s[i] != '\t')
		{
			write(1, &s[i], 1);
			i++;
		}
		if (prev != 0)
			write(1, &s[prev--], 1);
		i = prev;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		rev(argv[1]);
	write(1, "\n", 1);
	return (0);
}
