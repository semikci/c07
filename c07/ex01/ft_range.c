/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:25:11 by sekmekci          #+#    #+#             */
/*   Updated: 2023/09/22 04:43:23 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int ft_ultimate_range(int **range,int min, int max)
{
    int i;
    int *result;
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
    while(min < max)
    {
        result[i] = min;
        min++;
        i++;
    }
    return (i);
}
#include <stdio.h>
int main()
{
    int i=0;
    int *tab;
    //int *a= ft_ultimate_range(&tab,3,5);
    printf("%d\n",ft_ultimate_range(&tab,3,5));
    while(tab[i])
    {
        printf("%d",tab[i]);
        i++;
    }
}