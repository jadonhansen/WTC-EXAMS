/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 10:34:39 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/22 12:41:39 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	int	i;
	int	res;

	res = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res);
}

void	ft_putnbr(int num)
{
	int	n;

	n = 0;
	if (num > 9)
		ft_putnbr(num / 10);
	n = num % 10 + '0';
	write(1, &n, 1);
}

int		is_prime(int n)
{
	int	i;

	i = 2;
	while (i < n)
	{
		if ((n % i) == 0)
			return (0);
		i++;
	}
	return (n);
}

int		main(int argc, char **argv)
{
	int	num;
	int	sum;

	sum = 0;
	num = 0;
	if (argc == 2 && (ft_atoi(argv[1]) > 0))
	{
		num = ft_atoi(argv[1]);
		while (num >= 2)
		{
			sum = sum + is_prime(num);
			num--;
		}
		ft_putnbr(sum);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
