/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:19:32 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/15 16:44:04 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	do_op(char *one, char sign, char *two)
{
	int num;
	int number;

	num = atoi(one);
	number = atoi(two);
	if (sign == '*')
		printf("%d", num * number);
	else if (sign == '+')
		printf("%d", num + number);
	else if (sign == '-')
		printf("%d", num - number);
	else if (sign == '/')
		printf("%d", num / number);
	else if (sign == '%')
		printf("%d", num % number);
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		do_op(argv[1], argv[2][0], argv[3]);
	}
	printf("%c", '\n');
	return (0);
}
