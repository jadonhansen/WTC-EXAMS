/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 12:22:45 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/09 12:34:13 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	if (str)
	{
		while (*str != '\0')
		{
			write(1, &*str, 1);
			str++;
		}
	}
}

//DO NOT INCLUDE BELOW

int		main(void)
{
	char	*word;

	word = "Jadon";
	ft_putstr(word);
	return (0);
}
