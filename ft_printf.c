/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <ubolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 17:46:04 by ubolt             #+#    #+#             */
/*   Updated: 2021/01/16 15:36:28 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_printf(const char *format, ...)
{
	int		count;
	t_spec	spec;
	va_list	ap;

	if (!format)
		return (0);
	count = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			format = ft_parser(&spec, format, ap);
			count += ft_types(&spec, ap);
		}
		else
		{
			count += ft_putchar(*format);
			format++;
		}
	}
	va_end(ap);
	return (count);
}
