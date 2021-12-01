/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 12:16:12 by ercordho          #+#    #+#             */
/*   Updated: 2021/12/01 23:31:30 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strsub(const char *str, size_t start, size_t len)
{
	char	*new_str;
	int		i;

	if (str == (void *)0 || start >= len)
		return (ft_strdup(""));
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	new_str = (char *)ft_memset((void *)new_str, '\0', len + 1);
	if (new_str == (void *)0)
		return (NULL);
	i = 0;
	while (str[start] && start < len)
		new_str[i++] = str[start++];
	return (new_str);
}
