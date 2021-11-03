/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <ubolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 17:49:12 by ubolt             #+#    #+#             */
/*   Updated: 2021/01/15 22:11:37 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_output_p(t_spec *spec, unsigned long num, int dif)
{
	int	count;

	if (spec->iacc && (spec->acc <= 0) && !num)
		return (0);
	count = 0;
	while (dif > 0)
	{
		count += ft_putchar('0');
		dif--;
	}
	count += (num / 16) ? ft_output_p(spec, (num / 16), dif) : 0;
	count += ((num % 16) >= 10) ? ft_putchar(((num % 16) - 10) + 'a') : 0;
	count += ((num % 16) < 10) ? ft_putchar((num % 16) + '0') : 0;
	return (count);
}
