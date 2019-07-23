/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 11:54:15 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/23 12:26:52 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int	*arr;
	int	i;

	i = 0;
	if (start > end)
	{
		arr = (int *)malloc(sizeof(int) * (start - end) + 1);
		while (start >= end)
		{
			arr[i] = start;
			start--;
			i++;
		}
		return (arr);
	}
	else if (end > start)
	{
		arr = (int *)malloc(sizeof(int) * (end - start) + 1);
		while (start <= end)
		{
			arr[i] = start;
			start++;
			i++;
		}
		return (arr);
	}
	else if (start == end)
	{
		arr = (int *)malloc(sizeof(int) * 1);
		arr[i] = start;
		return (arr);
	}
	return (NULL);
}

//DO NOT INCLUDE ANYTHING BELOW

#include <stdio.h>
#include <unistd.h>

int		main(void)
{
	int	start;
	int	end;
	int	*test;
	int	i;

	start = 1;
	end = 3;
	test = ft_range(start, end);
	i = 0;
	while (i <= (end - start) || i <= (start - end))
	{
		printf("%d ", test[i]);
		i++;
	}
	return (0);
}
