/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 13:16:42 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/23 14:25:43 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_capital(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			ft_putchar(s[i++] - 32);
		else if (i == 0 && s[i] >= 'A' && s[i] <= 'Z')
			ft_putchar(s[i++]);
		if (s[i] >= 'a' && s[i] <= 'z' && (s[i - 1] == ' ' || s[i - 1] == '\t'))
			ft_putchar(s[i] - 32);
		else if (s[i] >= 'A' && s[i] <= 'Z' && s[i - 1] != ' ' && s[i - 1] != '\t')
			ft_putchar(s[i] + 32);
		else
			write(1, &s[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (argv[i] != '\0')
		{
			ft_capital(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
