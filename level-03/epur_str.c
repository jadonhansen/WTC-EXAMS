/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 13:02:17 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/22 13:16:18 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	epur_str(char *s)
{
	int	i;

	i = 0;
	while ((s[i] == '\t' || s[i] == '\n' || s[i] == ' ') && s[i] != '\0')
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == '\t' || s[i] == '\n' || s[i] == ' ')
		{
			while ((s[i] == '\t' || s[i] == '\n' || s[i] == ' ') && s[i] != '\0')
				i++;
			write(1, " ", 1);
		}
		write(1, &s[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}
