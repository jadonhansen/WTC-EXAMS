/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 14:30:20 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/23 16:31:38 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check(char c, int base)
{
	char *low;
	char *upper;

	low = "0123456789abcdef";
	upper = "0123456789ABCDEF";
	while (base > 0)
	{
		if (c == low[base] || c == upper[base])
			return (1);
		base--;
	}
	return (0);
}

int		ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	neg;
	int	res;

	res = 0;
	neg = 1;
	i = 0;
	while (str[i] >= 9 && str[i] <= 13 && str[i] != '\0')
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0' && (check(str[i], str_base) > 0))
	{
		res = res * str_base + (str[i] - '0');
		i++;
	}
	return (res * neg);
}

//DO NOT INCLUDE ANYTHING BELOW

#include <stdio.h>

int		main(void)
{
	int res;

	res = ft_atoi_base("22", 8);
	printf("%d\n", res);
	return (0);
}
