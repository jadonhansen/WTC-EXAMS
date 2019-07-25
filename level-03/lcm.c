/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 13:50:16 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/25 13:50:24 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	ans;
	unsigned int	num;

	num = 1;
	ans = 0;
	if (a < 0 || b < 0)
		return (0);
	if (a == 0 || b == 0)
		ans = 0;
	else
	{
		while (num)
		{
			if ((num % a == 0) && (num % b == 0))
			{
				ans = num;
				break ;
			}
			num++;
		}
	}
	return (ans);
}
