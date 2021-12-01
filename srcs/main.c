/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 12:24:53 by ercordho          #+#    #+#             */
/*   Updated: 2021/12/01 23:49:28 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	main(void)
{
	char	**strs;

	strs = ft_split("          ", " ");
	ft_putendls((const char **)strs);
	ft_memdels((void **)&strs, (void **)strs);
	return (0);
}
