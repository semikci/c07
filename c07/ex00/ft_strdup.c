/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 21:29:43 by sekmekci          #+#    #+#             */
/*   Updated: 2023/09/15 12:44:33 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char	*src)
{
	src = malloc(sizeof(*src) * sizeof(char));
	return (src);
}

int	main(void)
{
	char	*cp1 = "bilgisayar";
	char	*cp2 = ft_strdup(cp1);

	printf("%s", cp1);
	printf("%s", cp2);
}
