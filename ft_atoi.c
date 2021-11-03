/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <ubolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 19:20:42 by ubolt             #+#    #+#             */
/*   Updated: 2021/01/07 12:36:42 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *format)
{
	int	diple;
	int	num;

	num = 0;
	diple = 1;
	while (ft_isspaces(*format))
		format++;
	if (*format == '+' || *format == '-')
	{
		if (*format == '-')
			diple *= -1;
		format++;
	}
	while (ft_digit(*format))
	{
		num = num * 10 + (*format - '0');
		format++;
	}
	return (num * diple);
}
