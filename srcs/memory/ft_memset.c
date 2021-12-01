/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 00:52:04 by ercordho          #+#    #+#             */
/*   Updated: 2021/12/01 23:31:30 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	*ft_memset(void *ptr, int c, size_t end)
{
	size_t	start;

	if (ptr == (void *)0)
		return (NULL);
	start = 0;
	while (start < end)
		*(unsigned char *)(ptr + start++) = (unsigned char)c;
	return (ptr);
}
