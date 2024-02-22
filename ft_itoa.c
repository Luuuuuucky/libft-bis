/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 20:12:22 by pameyer           #+#    #+#             */
/*   Updated: 2024/02/22 20:12:23 by pameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static ssize_t	count_char(int n)
{
	ssize_t	count;

	if (n == 0)
		return (1);
	count = 0;
	if (n < 0)
	{
		n = n * -1;
		count++;
	}
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		count;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	count = count_char(n);
	result = ft_calloc(count + 1, sizeof(char));
	if (!result)
		return (NULL);
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	result[count] = 0;
	while (n > 0)
	{
		count--;
		result[count] = n % 10 + 48;
		n = n / 10;
	}
	return (result);
}

/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	printf("%s", ft_itoa(0));
}
*/
