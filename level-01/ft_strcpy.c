/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 15:53:24 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/08 16:25:33 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

//DO NOT COMMIT ANYTHING BELOW

#include <stdio.h>

int		main(void)
{
	char	*str1 = "jadon";
	char	*str2;

	str2 = (char *)malloc(sizeof(char) * 6);
	str2 = ft_strcpy(str2, str1);
	printf("%s", str2);
	return (0);
}
