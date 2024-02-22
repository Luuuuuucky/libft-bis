/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 20:15:05 by pameyer           #+#    #+#             */
/*   Updated: 2024/02/22 20:15:06 by pameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_or_send(char current)
{
	if (current == 'd' || current == 'i' || current == 'x' || current == 'X'
		|| current == 'u' || current == 'p' || current == 's' || current == 'c'
		|| current == '%')
		return (0);
	ft_putchar_fd('%', FD);
	ft_putchar_fd(current, FD);
	return (2);
}

int	ft_printf(const char *arg0, ...)
{
	va_list	ap;
	int		i;

	va_start(ap, arg0);
	i = 0;
	while (*arg0)
	{
		if (*arg0 == '%')
		{
			arg0++;
			i += check_or_send(*arg0);
			i += ft_printf_d(*arg0, ap);
			i += ft_printf_s(*arg0, ap);
			i += ft_printf_x(*arg0, ap);
			i += ft_printf_p(*arg0, ap);
		}
		else
		{
			ft_putchar_fd(*arg0, FD);
			i++;
		}
		arg0++;
	}
	va_end(ap);
	return (i);
}
