/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:12:54 by sekmekci          #+#    #+#             */
/*   Updated: 2023/09/22 16:49:50 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_size(char **strs, int size)
{
	int	k;
	int	i;
	int	a;

	a = 0;
	k = 1;
	while (k < size)
	{
		i = 0;
		while (strs[k][i])
		{
			a++;
			i++;
		}
		k++;
	}
	return (a);
}

void	ft_assign(char **strs, char *sep, int size, char *str)
{
	int	k;
	int	p;
	int	i;

	p = 0;
	k = 0;
	while (k < size)
	{
		i = 0;
		while (strs[k][i])
		{
			str[p] = strs[k][i];
			i++;
			p++;
		}
		i = 0;
		while (sep[i] && k != size - 1)
		{
			str[p] = sep[i];
			p++;
			i++;
		}
		k++;
	}
	str[p] = 0;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*empty;
	char	*str;

	str = malloc(ft_size(strs, size) * 1 + 1);
	if (str == (void *)0 || size == 0)
	{
		empty = malloc(1);
		empty[0] = 0;
		return (empty);
	}
	ft_assign(strs, sep, size, str);
	return (str);
}
