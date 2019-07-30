/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 14:09:25 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/30 16:59:43 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa_base(int value, int base)
{
	int		len;
	int		temp;
	char	*s;
	char	*base_string = "0123456789ABCDEF";

	len = 0;
	temp = value;
	if (value == 0)
		return ("0");
	while (temp)
	{
		temp = temp / base;
		len++;
	}
	temp = value;
	if (temp < 0)
	{
		if (base == 10)
			len++;
		temp = temp * -1;
	}
	s = (char *)malloc(sizeof(char) * len);
	s[len] = '\0';
	if (value < 0 && base == 10)
		s[0]= '-';
	while (temp)
	{
		s[--len] = base_string[temp % base];
		temp = temp / base;
	}
	return (s);
}

//DO NOT INCLUDE ANYTHING BELOW

#include <stdio.h>

int		main(void)
{
	int num;
	int	base;

	base = 16;
	num = -456;
	printf("%s", ft_itoa_base(num, base));
	return (0);
}
