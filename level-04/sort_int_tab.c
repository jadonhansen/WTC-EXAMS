/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 16:10:55 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/29 16:55:48 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	int				temp;

	i = 0;
	if (size == 0)
		return ;
	while (i < size - 1)
	{
		j = i;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[j];
				tab[j] = tab[i];
				tab[i] = temp;
			}
			j++;
		}
		i++;
	}
}

//DO NOT INCLUDE THE FOLLOWING
#include <stdio.h>

int		main(void)
{
	int	i = 0;
	int	arr[6] = {167, 5, 0, 2, -9, 3};
	sort_int_tab(arr, 6);
	while (i < 6)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return (0);
}
