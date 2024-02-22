/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pameyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 20:11:30 by pameyer           #+#    #+#             */
/*   Updated: 2024/02/22 20:11:32 by pameyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'));
}

/*
int main(int argc, char **argv)
{
	int values = ft_isalpha(76);
	if (values == 1)
	{
		write(1, "1", 1);
		return (1);
	}
	write(1, "0", 1);
	return(0);
}
*/
