/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <ubolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 17:53:30 by ubolt             #+#    #+#             */
/*   Updated: 2021/01/15 23:17:27 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"

# define TYPE "csdiuxXp%"

int			ft_printf(const char *format, ...);
void		ft_spec_init(t_spec *spec);
const char	*ft_parser(t_spec *spec, const char *format, va_list ap);
const char	*ft_width(t_spec *spec, const char *format, va_list ap);
int			ft_get_digits(long int num);
int			ft_len_dig_xp(unsigned long int num);
const char	*ft_acc(t_spec *spec, const char *format, va_list ap);
int			ft_types(t_spec *spec, va_list ap);
int			ft_type_s(t_spec *spec, va_list ap);
int			ft_type_u(t_spec *spec, va_list ap);
int			ft_type_p(t_spec *spec, va_list ap);
int			ft_type_c(t_spec *spec, va_list ap);
int			ft_type_x(t_spec *spec, va_list ap);
int			ft_type_di(t_spec *spec, va_list ap);
int			ft_output_nbr(t_spec *spec, long num, int dif);
int			ft_output_p(t_spec *spec, unsigned long num, int dif);
int			ft_output_x(t_spec *spec, unsigned int num, int dif);

#endif
