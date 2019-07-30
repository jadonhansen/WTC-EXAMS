/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 16:58:33 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/30 11:45:21 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rev(char *s, int start)
{
	int	i;

	i = 0;
	if (s[i])
	{
		while ((s[i] == ' ' || s[i] == '\t') && s[i] != '\0')
			i++;
		start = i;
		while (s[i] != ' ' && s[i] != '\t' && s[i] != '\0')
			i++;
		rev(&s[i], 0);
		write(1, &s[start], i - start);
		if (start > 0)
			write(1, " ", 1);
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		rev(argv[1], 1);
	write(1, "\n", 1);
	return (0);
}
