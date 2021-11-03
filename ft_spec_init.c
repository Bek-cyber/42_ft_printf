/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spec_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <ubolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 18:28:05 by ubolt             #+#    #+#             */
/*   Updated: 2021/01/16 15:17:32 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_spec_init(t_spec *spec)
{
	spec->type = 0;
	spec->width = 0;
	spec->iwidth = 0;
	spec->acc = -1;
	spec->iacc = 0;
	spec->len = 0;
	spec->flags = ' ';
	spec->len = 0;
	spec->dif = 0;
}
