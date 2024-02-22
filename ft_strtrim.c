/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 20:20:36 by pameyer           #+#    #+#             */
/*   Updated: 2024/02/22 20:20:38 by pameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ischarset(char c, const char *set)
{
	size_t	i;

	i = -1;
	while (set[++i])
		if (c == set[i])
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		i;
	int		x;
	int		end;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_ischarset(s1[i], set))
		i++;
	end = (ft_strlen(s1) - 1);
	while (end > i && ft_ischarset(s1[end], set))
		end--;
	result = ft_calloc((end - i + 2), sizeof(char));
	if (!result)
		return (NULL);
	x = -1;
	while (++x, i + x <= end)
		result[x] = s1[i + x];
	result[x] = 0;
	return (result);
}
