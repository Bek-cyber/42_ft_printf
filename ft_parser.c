/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <ubolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 18:39:02 by ubolt             #+#    #+#             */
/*   Updated: 2021/01/16 15:16:56 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

const char	*ft_parser(t_spec *spec, const char *format, va_list ap)
{
	while (*format)
	{
		ft_spec_init(spec);
		format = ft_width(spec, format, ap);
		format = ft_acc(spec, format, ap);
		if (ft_strchar(TYPE, *format))
		{
			spec->type = *format;
			format++;
			return (format);
		}
		format++;
	}
	return (format);
}
