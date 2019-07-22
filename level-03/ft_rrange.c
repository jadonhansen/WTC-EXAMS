/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 14:01:39 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/22 14:40:34 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
    int    *range;
    int    i;

    i = 0;
    if (start == end)
    {
        range = (int *)malloc(sizeof(range) * 1);
        range[0] = start;
        return (range);
    }
    else if (end > start)
    {
        range = (int *)malloc(sizeof(range) * (end - start));
        while (end >= start)
        {
            range[i] = end;
            end--;
            i++;
        }
        return (range);
    }
    else if (start > end)
    {
        range = (int *)malloc(sizeof(range) * (start - end));
        while (end <= start)
        {
            range[i] = end;
            end++;
            i++;
        }
        return (range);
    }
    return (NULL);
}

//DO NOT INCLUDE ANYTHING BELOW

#include <stdio.h>

int		main(void)
{
	int	*arr;
	int	i;
	int	start;
	int	end;

	end = -2;
	start = 2;
	i = 0;
	arr = ft_rrange(start, end);
	while (i <= (end - start) || i <= (start - end))
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return (0);
}
