/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 12:24:53 by ercordho          #+#    #+#             */
/*   Updated: 2021/10/04 16:34:55 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

int	main(void)
{
	char	**strs;

	strs = ft_split(" cou cou les am is ", " ");
	ft_putendls((const char **)strs);
	ft_memdels((void **)&strs, (void **)strs);
	return (0);
}
