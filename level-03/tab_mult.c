/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 11:09:59 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/23 11:49:08 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	int	num;

	num = 0;
	if (n > 9)
		ft_putnbr(n / 10);
	num = n % 10 + '0';
	write(1, &num, 1);
}

void	multiply(int num)
{
	int mult;
	int	ans;

	ans = 0;
	mult = 1;
	while (mult <= 9)
	{
		ft_putnbr(mult);
		write(1, " ", 1);
		write(1, "x", 1);
		write(1, " ", 1);
		ft_putnbr(num);
		write(1, " ", 1);
		write(1, "=", 1);
		write(1, " ", 1);
		ans = mult * num;
		ft_putnbr(ans);
		write(1, "\n", 1);
		mult++;
	}
}

int		ft_atoi(char *s)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (s[i] >= 9 && s[i] <= 13 && s[i] != '\0')
		i++;
	while (s[i] >= '0' && s[i] <= '9' && s[i] != '\0')
	{
		res = res * 10 + s[i] - '0';
		i++;
	}
	return (res);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		multiply(ft_atoi(argv[1]));
	else
		write(1, "\n", 1);
	return (0);
}
