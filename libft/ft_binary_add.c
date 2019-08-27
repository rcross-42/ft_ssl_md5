/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_binary_add.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcross <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 17:02:16 by rcross            #+#    #+#             */
/*   Updated: 2019/06/03 17:03:21 by rcross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	add two binary numbers
*/

int				ft_binary_add(int a, int b)
{
	int		c;

	while (b != 0)
	{
		c = (a & b) << 1;
		a = a ^ b;
		b = c;
	}
	return (a);
}