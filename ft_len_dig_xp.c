/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_dig_xp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <ubolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 16:36:05 by ubolt             #+#    #+#             */
/*   Updated: 2021/01/15 17:51:39 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_len_dig_xp(unsigned long int num)
{
	int		count;

	count = 0;
	if (num == 0)
		return (1);
	while (num)
	{
		count += 1;
		num /= 16;
	}
	return (count);
}
