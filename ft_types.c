/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_types.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <ubolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 10:19:37 by ubolt             #+#    #+#             */
/*   Updated: 2021/01/15 23:17:31 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_types(t_spec *spec, va_list ap)
{
	if (spec->type == 's')
		return (ft_type_s(spec, ap));
	else if (spec->type == 'u')
		return (ft_type_u(spec, ap));
	else if (spec->type == 'p')
		return (ft_type_p(spec, ap));
	else if (spec->type == 'c' || spec->type == '%')
		return (ft_type_c(spec, ap));
	else if (spec->type == 'd' || spec->type == 'i')
		return (ft_type_di(spec, ap));
	else if (spec->type == 'x' || spec->type == 'X')
		return (ft_type_x(spec, ap));
	return (0);
}
