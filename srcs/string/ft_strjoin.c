/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 12:40:28 by ercordho          #+#    #+#             */
/*   Updated: 2021/12/01 23:31:30 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strjoin(const char *str_1, const char *str_2)
{
	size_t	len;
	char	*new_str;
	int		i;

	if (str_1 == (void *)0 || str_2 == (void *)0)
		return (NULL);
	len = ft_strlen(str_1) + ft_strlen(str_2);
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	new_str = (char *)ft_memset((void *)new_str, '\0', len + 1);
	if (new_str == (void *)0)
		return (NULL);
	i = 0;
	while (*str_1)
		new_str[i++] = *str_1++;
	while (*str_2)
		new_str[i++] = *str_2++;
	return (new_str);
}
