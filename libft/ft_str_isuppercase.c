/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isuppercase.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcross <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 13:37:22 by rcross            #+#    #+#             */
/*   Updated: 2019/03/03 15:47:35 by rcross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_str_isuppercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
		if (!ft_isuppercase(str[i++]))
			return (0);
	return (1);
}