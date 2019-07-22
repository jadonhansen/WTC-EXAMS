/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 15:25:57 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/22 16:08:35 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(const char *str)
{
	int	i;
	int	j;
	int ret;

	i = 0;
	j = 1;
	ret = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		j = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		ret = (ret * 10) + (str[i] - '0');
		i++;
	}
	return (ret * j);
}

void	hex(int num)
{
	if (num >= 16)
		hex(num / 16);
	num = num % 16;
	if (num < 10)
		num = num + '0';
	else
		num = num + 'a' - 10;
	write(1, &num, 1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}
