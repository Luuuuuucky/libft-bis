/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 20:15:32 by pameyer           #+#    #+#             */
/*   Updated: 2024/02/22 20:15:33 by pameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_uputnbr_fd(unsigned int n, int fd)
{
	if (n > 9)
		ft_uputnbr_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}

int	ft_printf_d(char current, va_list ap)
{
	int	i;

	if (current == 'd' || current == 'i')
	{
		i = va_arg(ap, int);
		ft_putnbr_fd(i, FD);
		return (ft_count_digits(i));
	}
	return (ft_printf_u(current, ap));
}

int	ft_printf_u(char current, va_list ap)
{
	unsigned int	i;

	if (current == 'u')
	{
		i = va_arg(ap, unsigned int);
		ft_uputnbr_fd(i, FD);
		return (ft_count_digit_u(i));
	}
	return (0);
}
