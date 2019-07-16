/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 11:04:43 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/16 11:29:38 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

//DO NOT INCLUDE ANYTHING BELOW

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str1 = "jadon";
	char	*str2 = "z";

	printf("%d\n", ft_strcmp(str1, str2));
	printf("%d\n", strcmp(str1, str2));
	return (0);
}
