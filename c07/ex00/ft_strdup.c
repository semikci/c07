/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 21:29:43 by sekmekci          #+#    #+#             */
/*   Updated: 2023/09/22 16:52:56 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char	*src)
{
	src = malloc(sizeof(*src) * sizeof(char));
	if(src == 0)
	{
		*src = 0;
		return (0);
	}
	return (src);
}
