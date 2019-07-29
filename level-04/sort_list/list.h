/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 15:41:49 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/29 15:43:40 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list	t_list;

struct s_list
{
	int					data;
	t_list				*next;
};