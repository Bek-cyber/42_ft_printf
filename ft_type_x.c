/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <ubolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 12:58:10 by ubolt             #+#    #+#             */
/*   Updated: 2021/01/15 21:54:37 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_type_x(t_spec *spec, va_list ap)
{
	unsigned int	num;
	int				count;
	int				len;

	num = va_arg(ap, unsigned int);
	len = (spec->iacc && (spec->acc <= 0) && !num) ? 0 : ft_len_dig_xp(num);
	count = 0;
	spec->dif = (spec->acc > len) ? (spec->acc - len) : 0;
	if ((spec->flags == '0') && !spec->iacc && (spec->width > len))
		spec->dif = spec->width - len;
	spec->len = spec->dif + len;
	count += (spec->flags == '-') ? ft_output_x(spec, num, spec->dif) : 0;
	while ((spec->width - spec->len) > 0)
	{
		count += ft_putchar(' ');
		spec->width--;
	}
	count += (spec->flags != '-') ? ft_output_x(spec, num, spec->dif) : 0;
	return (count);
}
