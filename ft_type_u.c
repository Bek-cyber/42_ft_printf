/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <ubolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 12:45:15 by ubolt             #+#    #+#             */
/*   Updated: 2021/01/15 23:15:46 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_type_u(t_spec *spec, va_list ap)
{
	long int	num;
	int			len;
	int			count;

	num = va_arg(ap, unsigned int);
	len = (spec->iacc && (spec->acc <= 0) && !num) ? 0 : ft_get_digits(num);
	count = 0;
	if (num < 0)
		spec->dif = (spec->acc > (len - 1)) ? (spec->acc - (len - 1)) : 0;
	else
		spec->dif = (spec->acc > len) ? (spec->acc - len) : 0;
	if ((spec->flags == '0') && spec->iacc == 0 && (spec->width > len))
		spec->dif = spec->width - len;
	spec->len = spec->dif + len;
	count += (spec->flags == '-') ? ft_output_nbr(spec, num, spec->dif) : 0;
	while ((spec->width - spec->len) > 0)
	{
		count += ft_putchar(' ');
		spec->width--;
	}
	count += (spec->flags != '-') ? ft_output_nbr(spec, num, spec->dif) : 0;
	return (count);
}
