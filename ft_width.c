/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <ubolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 18:44:24 by ubolt             #+#    #+#             */
/*   Updated: 2021/01/09 17:57:16 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

const char	*ft_width(t_spec *spec, const char *format, va_list ap)
{
	while (*format == '-' || *format == '0')
	{
		if (*format == '0' && spec->flags == ' ')
			spec->flags = '0';
		else if (*format++ == '-')
			spec->flags = '-';
	}
	if (ft_digit(*format))
	{
		spec->iwidth = 1;
		spec->width = ft_atoi(format);
		format += ft_get_digits(spec->width);
	}
	else if (*format == '*')
	{
		spec->iwidth = 1;
		spec->width = va_arg(ap, int);
		if (spec->width < 0)
		{
			spec->width = spec->width * (-1);
			spec->flags = '-';
		}
		format++;
	}
	return (format);
}
