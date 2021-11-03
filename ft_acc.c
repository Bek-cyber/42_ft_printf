/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_acc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <ubolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 09:29:38 by ubolt             #+#    #+#             */
/*   Updated: 2021/01/15 14:10:55 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

const char	*ft_acc(t_spec *spec, const char *format, va_list ap)
{
	if (*format == '.')
	{
		spec->iacc = 1;
		format++;
		if (ft_digit(*format))
			spec->acc = ft_atoi(format);
		else if (*format == '*')
		{
			format++;
			spec->acc = va_arg(ap, int);
			if (spec->acc < 0)
			{
				spec->iacc = 0;
				spec->acc = 0;
			}
		}
	}
	while (ft_digit(*format))
		format++;
	return (format);
}
