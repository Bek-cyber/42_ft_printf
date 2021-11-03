/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <ubolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 12:57:06 by ubolt             #+#    #+#             */
/*   Updated: 2021/01/15 22:28:49 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_type_p(t_spec *spec, va_list ap)
{
	int				len;
	int				count;
	unsigned long	num;

	num = va_arg(ap, unsigned long);
	len = (spec->iacc && (spec->acc <= 0) && !num) ? 0 : ft_len_dig_xp(num);
	count = 0;
	spec->dif = (spec->acc > len) ? (spec->acc - len) : 0;
	if ((spec->flags == '0') && !spec->iacc && (spec->width > len))
		spec->dif = spec->width - len;
	spec->len = spec->dif + len + 2;
	count += (spec->flags == '-') ? ft_putchar('0') : 0;
	count += (spec->flags == '-') ? ft_putchar('x') : 0;
	count += (spec->flags == '-') ? ft_output_p(spec, num, spec->dif) : 0;
	while ((spec->width - spec->len) > 0)
	{
		count += ft_putchar(' ');
		spec->width--;
	}
	count += (spec->flags != '-') ? ft_putchar('0') : 0;
	count += (spec->flags != '-') ? ft_putchar('x') : 0;
	count += (spec->flags != '-') ? ft_output_p(spec, num, spec->dif) : 0;
	return (count);
}
