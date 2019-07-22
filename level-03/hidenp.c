/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 14:41:21 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/22 14:52:59 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hide(char *s1, char *s2)
{
	int	i;
	int	j;
	int	len;

	len = 0;
	i = 0;
	j = 0;
	while (s2[j] != '\0' && s1[i] != '\0')
	{
		if (s1[i] == s2[j])
			i++;
		j++;
	}
	while (s1[len] != '\0')
		len++;
	if (i == len)
		write(1, "1", 1);
	else
		write(1, "0", 1);
}

//DO NOT INCLUDE ANYTHING BELOW

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_hide(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
