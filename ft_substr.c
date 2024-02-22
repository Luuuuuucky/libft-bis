/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 20:20:50 by pameyer           #+#    #+#             */
/*   Updated: 2024/02/22 20:20:57 by pameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_check(void)
{
	char	*substr;

	substr = malloc(sizeof(char));
	if (!substr)
		return (NULL);
	*substr = 0;
	return (substr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	values;

	if (start >= ft_strlen(s))
		return (ft_check());
	if (ft_strlen(s) - start >= len)
		substr = ft_calloc(len + 1, sizeof(char));
	else
		substr = ft_calloc(ft_strlen(s) - start + 1, sizeof(char));
	if (substr == NULL)
		return (NULL);
	i = start;
	values = 0;
	while (s[i])
	{
		if (values >= len)
			break ;
		substr[values] = s[i];
		values++;
		i++;
	}
	substr[values] = 0;
	return (substr);
}
