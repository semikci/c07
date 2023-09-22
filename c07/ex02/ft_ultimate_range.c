/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:01:26 by sekmekci          #+#    #+#             */
/*   Updated: 2023/09/22 16:45:29 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*result;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	result = malloc(sizeof(int) * (max - min));
	if (!result)
	{
		*range = 0;
		return (-1);
	}
	*range = result;
	i = 0;
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (i);
}
