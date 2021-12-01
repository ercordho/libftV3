/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:06:35 by ercordho          #+#    #+#             */
/*   Updated: 2021/12/01 23:34:36 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

size_t	ft_putendl(const char *str)
{
	if (str == (void *)0)
	{
		if (__APPLE__)
			return (ft_putstr("(null)\n"));
		return (ft_putstr("(nil)\n"));
	}
	return (ft_putstr(str) + ft_putchar('\n'));
}
