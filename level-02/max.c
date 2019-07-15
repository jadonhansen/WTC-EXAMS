/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 14:27:37 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/15 14:39:27 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int *tab, unsigned int len)
{
	unsigned int	i;
	int				max;

	max = 0;
	i = 0;
	if (!tab)
		return (0);
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

//DO NOT INCLUDE ANYTHING BELOW

#include <stdio.h>

int		main(void)
{
	int	arr[13] = {1, 2340, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 113};
	int	len	= 13;
	int	maxnum;

	maxnum = max(arr, len);
	printf("%d", maxnum);
	return (0);
}
