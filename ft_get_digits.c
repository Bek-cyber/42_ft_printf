/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_digits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <ubolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 19:49:58 by ubolt             #+#    #+#             */
/*   Updated: 2021/01/15 16:08:32 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_get_digits(long int num)
{
	int	count;

	if (num == 0)
		return (1);
	count = 0;
	if (num < 0)
	{
		count++;
		num *= -1;
	}
	while (num)
	{
		count++;
		num /= 10;
	}
	return (count);
}
