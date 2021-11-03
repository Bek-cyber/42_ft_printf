/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <ubolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 12:57:31 by ubolt             #+#    #+#             */
/*   Updated: 2021/01/15 22:04:42 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_type_c(t_spec *spec, va_list ap)
{
	int		count;
	char	c;
	char	ch;

	count = 0;
	ch = (spec->flags == '0') ? '0' : ' ';
	c = (spec->type == 'c') ? va_arg(ap, int) : '%';
	count += (spec->flags == '-') ? ft_putchar(c) : 0;
	while ((spec->width - 1) > 0)
	{
		count += ft_putchar(ch);
		spec->width--;
	}
	count += (spec->flags != '-') ? ft_putchar(c) : 0;
	return (count);
}
