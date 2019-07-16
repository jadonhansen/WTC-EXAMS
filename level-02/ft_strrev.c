/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 11:30:55 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/16 12:19:19 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	temp;
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (str[j] != '\0')
		j++;
	j--;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		j--;
		i++;
	}
	return (str);
}

//DO NOT INCLUDE ANYTHING BELOW

#include <stdio.h>

int		main(void)
{
	char	str[] = "jadon";

	printf("%s\n", ft_strrev(str));
	return (0);
}
