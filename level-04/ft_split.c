/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 13:50:52 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/25 13:50:58 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count(char *s)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i] != '\0')
			i++;
		if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n' && s[i] != '\0')
		{
			while (s[i] != ' ' && s[i] != '\t' && s[i] != '\n' && s[i] != '\0')
				i++;
			count++;
		}
	}
	return (count);
}

char	*fill(char *s, int i)
{
	int		j;
	int		k;
	int		letters;
	char	*str;

	k = i;
	letters = 1;
	j = 0;
	while (s[k] != ' ' && s[k] != '\t' && s[k] != '\n' && s[k] != '\0')
	{
		letters++;
		k++;
	}
	str = (char *)malloc(sizeof(char) * letters);
	while (s[i] != ' ' && s[i] != '\t' && s[i] != '\n' && s[i] != '\0')
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}

char	**ft_split(char *str)
{
	int		i;
	int		j;
	int		words;
	char	**arr;

	i = 0;
	j = 0;
	words = count(str);
	arr = (char **)malloc(sizeof(char *) * words + 1);
	while (str[i] != '\0')
	{
		while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i] != '\0')
			i++;
		if (str[i] == '\0')
			break ;
		else
			arr[j++] = fill(str, i);
		while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i] != '\0')
			i++;
	}
	arr[j] = NULL;
	return (arr);
}
