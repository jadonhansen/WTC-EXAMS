/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 14:27:10 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/09 14:38:42 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		l;
	char	*str;

	i = 0;
	l = 0;
	while (src[l] != '\0')
		l++;
	str = (char *)malloc(sizeof(char) * l + 1);
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

//DO NOT INCLUDE ANYTHING BELOW

#include <stdio.h>

int		main(void)
{
	char	*word;
	char	*str;

	word = "Jadon";
	str = ft_strdup(word);
	printf("%s", str);
	return (0);
}
