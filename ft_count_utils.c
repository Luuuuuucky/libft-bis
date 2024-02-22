/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 20:10:53 by pameyer           #+#    #+#             */
/*   Updated: 2024/02/22 20:10:59 by pameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_digits(int _nb)
{
	int		count;
	long	nb;

	nb = _nb;
	count = 1;
	if (nb < 0)
	{
		nb = -nb;
		count++;
	}
	while (nb > 9)
	{
		count++;
		nb /= 10;
	}
	return (count);
}

int	ft_count_digit_u(unsigned int n)
{
	int	i;

	i = 1;
	while (n > 9)
	{
		i++;
		n /= 10;
	}
	return (i);
}

int	ft_count_hex_digits(unsigned long nb)
{
	int	len;

	len = 1;
	while (nb > 0xf)
	{
		++len;
		nb /= 16;
	}
	return (len);
}
