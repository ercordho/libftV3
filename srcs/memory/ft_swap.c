/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 12:48:47 by ercordho          #+#    #+#             */
/*   Updated: 2021/10/04 16:23:33 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	ft_swap(void *a, void *b)
{
	void	*tmp;

	tmp = (int *)malloc(sizeof(int) * 1);
	if (tmp == NULL)
		return ;
	ft_memcpy(tmp, a, 1);
	ft_memcpy(a, b, 1);
	ft_memcpy(b, tmp, 1);
	ft_memdel(&tmp);
}
