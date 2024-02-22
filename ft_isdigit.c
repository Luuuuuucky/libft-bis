/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 20:11:52 by pameyer           #+#    #+#             */
/*   Updated: 2024/02/22 20:11:53 by pameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/*
#include "unistd.h"

int main(int argc, char **argv)
{
	int values = ft_isdigit(48);
	if (values == 1)
	{
		write(1, "1", 1);
		return (1);
	}
	write(1, "0", 1);
	return(0);
}
*/
