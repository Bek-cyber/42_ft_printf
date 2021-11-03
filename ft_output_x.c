/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <ubolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 18:17:19 by ubolt             #+#    #+#             */
/*   Updated: 2021/01/15 22:10:22 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_output_x(t_spec *spec, unsigned int num, int dif)
{
	char	c;
	int		count;

	if (spec->iacc && spec->acc <= 0 && num == 0)
		return (0);
	count = 0;
	c = (spec->type == 'X') ? 'A' : 'a';
	while (dif)
	{
		count += ft_putchar('0');
		dif--;
	}
	count += (num / 16) ? ft_output_x(spec, (num / 16), dif) : 0;
	count += ((num % 16) >= 10) ? ft_putchar(((num % 16) - 10) + c) : 0;
	count += ((num % 16) < 10) ? ft_putchar((num % 16) + '0') : 0;
	return (count);
}
