/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:06:38 by ercordho          #+#    #+#             */
/*   Updated: 2021/12/01 23:35:44 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

size_t	ft_putstr(const char *str)
{
	size_t	size;

	if (str == (void *)0)
	{
		if (__APPLE__)
			return (ft_putstr("(null)"));
		return (ft_putstr("(nil)"));
	}
	size = 0;
	while (*str)
		size += ft_putchar(*str++);
	return (size);
}
