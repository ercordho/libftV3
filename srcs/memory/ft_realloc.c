/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 17:28:28 by ercordho          #+#    #+#             */
/*   Updated: 2021/10/04 17:21:24 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	*ft_realloc(void *ptr, size_t n_size, size_t o_size)
{
	void	*n_ptr;

	n_ptr = malloc((sizeof(void) * (n_size + 1)));
	n_ptr = ft_memset(n_ptr, '\0', n_size);
	if (n_ptr)
		ft_memcpy(n_ptr, ptr, o_size);
	free(ptr);
	return (n_ptr);
}
