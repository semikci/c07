/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:25:11 by sekmekci          #+#    #+#             */
/*   Updated: 2023/09/20 15:15:26 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*nbr;
	int	i;
	int	k;
	int	j;

	j = max - min;
	k = 0;
	if (min >= max)
		return (NULL);
	nbr = malloc((j) * sizeof(int));
	i = min;
	while (min <= i && max > i)
	{
		nbr[k] = i;
		k++;
		i++;
	}
	return (nbr);
}

int main()
{
	int min;
	int max;
	int size;
	int *tab;
	int i;
	
	i = 0;
	min = 20;
	max = 30;
	size = 10;
	tab = ft_range(min, max);
	while(max - min > i)
	printf("%d\n", tab[i++]);
}