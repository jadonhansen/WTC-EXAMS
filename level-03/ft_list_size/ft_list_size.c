/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 13:25:41 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/22 13:53:07 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int	count;

	count = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		count++;
	}
	return (count);
}

//DO NOT INCLUDE ANYTHING BELOW

#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
    t_list *head = NULL;
    t_list *second = NULL;
    t_list *third = NULL;

    head = (t_list *)malloc(sizeof(t_list *));
    second = (t_list *)malloc(sizeof(t_list *));
    third = (t_list *)malloc(sizeof(t_list *));

    head->data = (void *)1;
    head->next = second;
    second->data = (void *)2;
    second->next = third;
    third->data = (void *)3;
    third->next = NULL;
	printf("%d", ft_list_size(head));
    return (0);
}
