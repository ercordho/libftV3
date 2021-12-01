/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 18:29:13 by ercordho          #+#    #+#             */
/*   Updated: 2021/12/01 23:31:30 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strdup(const char *str)
{
	char	*new_str;
	int		i;

	if (str == (void *)0)
		return (NULL);
	new_str = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (new_str == (void *)0)
		return (NULL);
	i = 0;
	while (*str)
		new_str[i++] = *str++;
	new_str[i] = '\0';
	return (new_str);
}
