/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   countwords.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:13:25 by ercordho          #+#    #+#             */
/*   Updated: 2021/10/04 17:22:33 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	countwords(const char *str, const char *set)
{
	int	count;
	int	ret;

	if (str == NULL || set == NULL)
		return (0);
	count = 0;
	ret = 0;
	while (*str)
	{
		if (ft_ischarset(set, *str) >= 0)
			ret = 0;
		else
		{
			if (ret == 0)
				count++;
			ret = 1;
		}
		str++;
	}
	return (count);
}