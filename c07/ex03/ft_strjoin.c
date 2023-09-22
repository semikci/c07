/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:34:59 by sekmekci          #+#    #+#             */
/*   Updated: 2023/09/22 04:43:18 by sekmekci         ###   ########.fr       */
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
	i = 0;
	while (k < size)
	{
		while (strs[k][i])
		{
			a++;
			i++;
		}
		k++;
	}
	return (a);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*empty;
	char	*str;
	int		k;
	int		i;
	int		p;

	k = 1;
	p = 0;
	str = malloc(ft_size(strs, size) * 1 + 1);
	if (str == (void *)0)
	{
		empty = malloc(1);
		empty[0] = 0;
		return (empty);
	}
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
		while (sep[i])
		{
			str[p] = sep[i];
			p++;
			i++;
		}
		k++;
	}
	return (str);
}

int	main(int size, char **strs)
{
	char	*str;
	char	seb[] = "bastır";
	str = ft_strjoin(size, strs, seb);
	printf("%s", str);
}