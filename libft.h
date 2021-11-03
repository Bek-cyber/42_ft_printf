/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <ubolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 17:53:51 by ubolt             #+#    #+#             */
/*   Updated: 2021/01/16 15:07:44 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdarg.h>
# include <unistd.h>

typedef struct	s_spec
{
	int		type;
	int		width;
	int		iwidth;
	int		acc;
	int		iacc;
	char	flags;
	int		len;
	int		dif;
	int		count;
}				t_spec;

int				ft_put_string(char *s);
int				ft_putchar(char c);
int				ft_digit(char c);
int				ft_atoi(const char *format);
int				ft_putstr(char *str, int len);
int				ft_isspaces(char c);
int				ft_strlen(char *str);
char			*ft_strchar(char *str, char c);

#endif
