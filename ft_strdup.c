/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 20:18:20 by pameyer           #+#    #+#             */
/*   Updated: 2024/02/22 20:18:21 by pameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*tab;
	int		i;

	i = 0;
	while (src[i])
		i++;
	tab = (char *) malloc(sizeof(char) * i + 1);
	if (!tab)
		return (NULL);
	i = -1;
	while (src[++i])
		tab[i] = src[i];
	tab[i] = '\0';
	return (tab);
}
