/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsplit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 03:45:14 by ercordho          #+#    #+#             */
/*   Updated: 2021/12/01 23:32:07 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

static char	*clean_memory(const char *str)
{
	ft_memdel((void **)&str);
	return (NULL);
}

char	*ft_unsplit(const char **strs, const char *set)
{
	char	*str;
	int		i;
	char	*new_str;
	char	*tmp_str;

	str = ft_strdup("");
	if (strs == (void *)0 || *strs == (void *)0)
		return (NULL);
	if (set == (void *)0 || str == (void *)0)
		return (NULL);
	i = -1;
	while (strs[++i])
	{
		new_str = ft_strjoin(strs[i], set);
		tmp_str = str;
		if (new_str == (void *)0)
			return (clean_memory(str));
		str = ft_strjoin(tmp_str, (const char *)new_str);
		ft_memdel((void **)&new_str);
		ft_memdel((void **)&tmp_str);
		if (str == (void *)0)
			return (clean_memory(str));
	}
	str[ft_strlen(str) - 1] = '\0';
	return (str);
}
