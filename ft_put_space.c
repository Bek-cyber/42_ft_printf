/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_space.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <ubolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 16:38:02 by ubolt             #+#    #+#             */
/*   Updated: 2021/01/16 15:26:00 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_output_nbr(t_spec *spec, long int num, int dif)
{
	int	count;

	count = 0;
	if (spec->iacc && (spec->acc <= 0) && !num)
		return (0);
	if (num == -2147483648)
	{
		count += ft_putchar('-');
		while (dif-- > 0)
			count += ft_putchar('0');
		count += ft_put_string("2147483648");
		return (count);
	}
	count += (num < 0) ? ft_putchar('-') : 0;
	num = (num < 0) ? (num * (-1)) : num;
	while (dif > 0)
	{
		count += ft_putchar('0');
		dif--;
	}
	count += (num / 10) ? ft_output_nbr(spec, (num / 10), dif) : 0;
	count += ft_putchar((num % 10) + '0');
	return (count);
}
