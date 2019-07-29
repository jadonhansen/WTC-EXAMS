/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 13:16:07 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/29 14:07:26 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	char	*str;
	long	temp;
	int		length;

	temp = nbr;
	if (nbr <= 0)
		length = 2;
	else
		length = 1;
	while (nbr)
	{
		nbr = nbr / 10;
		length++;
	}
	str = (char *)malloc(sizeof(char) * length);
	str[--length] = '\0';
	if (temp < 0)
		str[0] = '-';
	else if (temp == 0)
		str[0] = '0';
	while (temp)
	{
		if (temp < 0)
			str[--length] = -temp % 10 + '0';
		else
			str[--length] = temp % 10 + '0';
		temp = temp / 10;
	}
	return (str);
}

//DO NOT INCLUDE ANYTHING BELOW
#include <stdio.h>

int		main(void)
{
	int	num;

	num = -234;
	printf("%s", ft_itoa(num));
	return (0);
}
