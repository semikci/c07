/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:01:26 by sekmekci          #+#    #+#             */
/*   Updated: 2023/09/22 04:43:21 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*empty;
	int	i;
	int	k;
	int	j;

	j = max - min;
	k = 0;
	if (min >= max)
		return (0);
	range = malloc(((j) * 4));
	if (range == (void *)0)
	{
		empty = malloc(1);
		empty[0] = 0;
		return (empty);
	}
	i = min;
	while (min <= i && max > i)
	{
		range[k] = i;
		k++;
		i++;
	}
	return (range);
}
	