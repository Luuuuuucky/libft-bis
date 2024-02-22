/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 20:14:32 by pameyer           #+#    #+#             */
/*   Updated: 2024/02/22 20:14:33 by pameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*cd;
	unsigned char	*cs;

	i = -1;
	cd = (unsigned char *) dest;
	cs = (unsigned char *) src;
	if (cd == NULL && cs == NULL)
		return (NULL);
	while (++i < n)
		cd[i] = cs[i];
	return (dest);
}
