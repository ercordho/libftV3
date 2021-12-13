/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 12:24:53 by ercordho          #+#    #+#             */
/*   Updated: 2021/12/13 16:01:24 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

#include <stdio.h>

int	main(void)
{
	int	*a = NULL;
	if (a == NULL)
		printf("a = %p\n", a);
	int	*b = (void *)0;
	if (b == (void *)0)
		printf("b = %p\n", b);
	int	*c = 0;
	if (c == 0)
		printf("c = %p\n", c);
	char *d = NULL;
	if (d == NULL)
		printf("d = %s\n", d);
	char *e = (void *)0;
	if (e == (void *)0)
		printf("e = %s\n", e);
	char *f = 0;
	if (f == 0)
		printf("f = %s\n", f);
	int *g = 0x0;
	if (g == 0x0)
		printf("g = %p\n", g);
	char *h = 0x0;
	if (h == 0x0)
		printf("h = %s\n", h);
	return (0);
}
