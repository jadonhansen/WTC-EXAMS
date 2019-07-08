/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 16:26:42 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/08 16:38:20 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i] != '\0')
			i++;
	}
	return (i);
}

//DO NOT COMMIT ANYTHING BELOW

#include <stdio.h>

int		main(void)
{
	int		i;
	char	*word;

	i = 0;
	word = "Jadon";
	i = ft_strlen(word);
	printf("%d", i);
	return (0);
}
