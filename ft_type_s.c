/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <ubolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 10:35:56 by ubolt             #+#    #+#             */
/*   Updated: 2021/01/16 15:27:03 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_type_s(t_spec *spec, va_list ap)
{
	int		count;
	int		len;
	char	c;
	char	*str;

	if (!(str = va_arg(ap, char *)))
		str = "(null)";
	len = ft_strlen(str);
	count = 0;
	c = (spec->flags == '0') ? '0' : ' ';
	spec->len = ((len > spec->acc) && spec->iacc) ? spec->acc : len;
	count += (spec->flags == '-') ? ft_putstr(str, spec->len) : 0;
	while (((spec->width - spec->len) > 0) && (spec->width != 0))
	{
		count += ft_putchar(c);
		spec->width--;
	}
	count += (spec->flags != '-') ? ft_putstr(str, spec->len) : 0;
	return (count);
}
