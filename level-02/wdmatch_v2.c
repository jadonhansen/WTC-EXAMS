/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch_v2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 15:40:25 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/15 16:08:25 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	match(char *str1, char *str2)
{
	int	len;
	int	i;
	int	k;

	k = 0;
	i = 0;
	len = 0;
	while (str1[len] != '\0')
		len++;
	while(str2[k] != '\0' && i < len)
	{
		if (str2[k] == str1[i])
			i++;
		k++;
	}
	if (i == len)
		write(1, str1, len);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		match(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
