/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <ubolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:55:58 by ubolt             #+#    #+#             */
/*   Updated: 2021/01/16 15:13:32 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

int main()
{
	int		a = -4;
	int		b = 0;
	char	c = 'a';
	int		d = 2147483647;
	int		e = -2147483648;
	int		f = 42;
	int		g = 25;
	int		h = 4200;
	int		i = 8;
	int		j = -12;
	int		k = 123456789;
	int		l = 0;
	int		m = -12345678;
	int		count = 34;
	char	*n = "abcdefghijklmnop";
	char	*o = "-a";
	char	*p = "-12";
	char	*q = "0";
	char	*r = "%%";
	char	*s = "-2147483648";
	char	*t = "0x12345678";
	char	*u = "-0";
	
/////////////////////////////////////////////

	printf("1 - Simple input test\n");//1
	ft_printf("1 - Simple input test\n");
	printf("2 - %i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X\n", i, j, k, l, m, n, c, c, j, j, j); //2
	ft_printf("2 - %i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X\n", i, j, k, l, m, n, c, c, j, j, j);
	printf("3 - %0i, %0d, %0d, %0d, %0d, %0d, %0d, %0d\n", i, j, k, l, m, c, e, d);//3
	ft_printf("3 - %0i, %0d, %0d, %0d, %0d, %0d, %0d, %0d\n", i, j, k, l, m, c, e, d);
	printf("4 - %1i, %1d, %1d, %1d, %1d, %1d, %1d, %1d\n", i, j, k, l, m, c, e, d);//4
	ft_printf("4 - %1i, %1d, %1d, %1d, %1d, %1d, %1d, %1d\n", i, j, k, l, m, c, e, d);
	printf("5 - %2i, %2d, %2d, %2d, %2d, %2d, %2d, %2d\n", i, j, k, l, m, c, e, d);//5
	ft_printf("5 - %2i, %2d, %2d, %2d, %2d, %2d, %2d, %2d\n", i, j, k, l, m, c, e, d);
	printf("6 - %3i, %3d, %3d, %3d, %3d, %3d, %3d, %3d\n", i, j, k, l, m, c, e, d); //6
	ft_printf("6 - %3i, %3d, %3d, %3d, %3d, %3d, %3d, %3d\n", i, j, k, l, m, c, e, d);
	printf("7 - %4i, %4d, %4d, %4d, %4d, %4d, %4d, %4d\n", i, j, k, l, m, c, e, d);//7
	ft_printf("7 - %4i, %4d, %4d, %4d, %4d, %4d, %4d, %4d\n", i, j, k, l, m, c, e, d);
	printf("12 - %0.i, %0.d, %0.d, %0.d, %0.d, %0.d, %0.d, %0.d\n", i, j, k, l, m, c, e, d);//12
	ft_printf("12 - %0.i, %0.d, %0.d, %0.d, %0.d, %0.d, %0.d, %0.d\n", i, j, k, l, m, c, e, d);
	printf("13 - %.0i, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d\n", i, j, k, l, m, c, e, d);//13
	ft_printf("13 - %.0i, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d\n", i, j, k, l, m, c, e, d);
	printf("14 - %0.0i, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d\n", i, j, k, l, m, c, e, d);//14
	ft_printf("14 - %0.0i, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d\n", i, j, k, l, m, c, e, d);
	printf("15 - %-0i, %-0d, %-0d, %-0d, %-0d, %-0d, %-0d, %-0d\n", i, j, k, l, m, c, e, d);//15
	ft_printf("15 - %-0i, %-0d, %-0d, %-0d, %-0d, %-0d, %-0d, %-0d\n", i, j, k, l, m, c, e, d);
	printf("16 - %0-i, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d\n", i, j, k, l, m, c, e, d);//16
	ft_printf("16 - %0-i, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d\n", i, j, k, l, m, c, e, d);
	printf("17 - %-.i, %-.d, %-.d, %-.d, %-.d, %-.d, %-.d, %-.d\n", i, j, k, l, m, c, e, d);//17
	ft_printf("17 - %-.i, %-.d, %-.d, %-.d, %-.d, %-.d, %-.d, %-.d\n", i, j, k, l, m, c, e, d);
	printf("18 - %-.0i, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d\n", i, j, k, l, m, c, e, d);//18
	ft_printf("18 - %-.0i, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d\n", i, j, k, l, m, c, e, d);
	printf("19 - %-i, %-d, %-d, %-d, %-d, %-d, %-d, %-d\n", i, j, k, l, m, c, e, d);//19
	ft_printf("19 - %-i, %-d, %-d, %-d, %-d, %-d, %-d, %-d\n", i, j, k, l, m, c, e, d);
	printf("20 - %.i, %.d, %.d, %.d, %.d, %.d, %.d, %.d\n", i, j, k, l, m, c, e, d);//20
	ft_printf("20 - %.i, %.d, %.d, %.d, %.d, %.d, %.d, %.d\n", i, j, k, l, m, c, e, d);
	printf("21 - %-0.0i, %-0.0d, %-0.0d, %-0.0d, %-0.0d, %-0.0d, %-0.0d, %-0.0d\n", i, j, k, l, m, c, e, d);//21
	ft_printf("21 - %-0.0i, %-0.0d, %-0.0d, %-0.0d, %-0.0d, %-0.0d, %-0.0d, %-0.0d\n", i, j, k, l, m, c, e, d);
	printf("22 - %00i, %00d, %00d, %00d, %00d, %00d, %00d, %00d\n", i, j, k, l, m, c, e, d);//22
	ft_printf("22 - %00i, %00d, %00d, %00d, %00d, %00d, %00d, %00d\n", i, j, k, l, m, c, e, d);
	printf("23 - %1.i, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d\n", i, j, k, l, m, c, e, d);//23
	ft_printf("23 - %1.i, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d\n", i, j, k, l, m, c, e, d);
	printf("24 - %.1i, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d\n", i, j, k, l, m, c, e, d);//24
	ft_printf("24 - %.1i, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d\n", i, j, k, l, m, c, e, d);
	printf("25 - %1.1i, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d\n", i, j, k, l, m, c, e, d);//25
	ft_printf("25 - %1.1i, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d\n", i, j, k, l, m, c, e, d);
	printf("26 - %-1i, %-1d, %-1d, %-1d, %-1d, %-1d, %-1d, %-1d\n", i, j, k, l, m, c, e, d);//26
	ft_printf("26 - %-1i, %-1d, %-1d, %-1d, %-1d, %-1d, %-1d, %-1d\n", i, j, k, l, m, c, e, d);
	printf("27 - %-01i, %-01d, %-01d, %-01d, %-01d, %-01d, %-01d, %-01d\n", i, j, k, l, m, c, e, d);//27
	ft_printf("27 - %-01i, %-01d, %-01d, %-01d, %-01d, %-01d, %-01d, %-01d\n", i, j, k, l, m, c, e, d);
	printf("28 - %-1.i, %-1.d, %-1.d, %-1.d, %-1.d, %-1.d, %-1d, %-1d\n", i, j, k, l, m, c, e, d);//28
	ft_printf("28 - %-1.i, %-1.d, %-1.d, %-1.d, %-1.d, %-1.d, %-1d, %-1d\n", i, j, k, l, m, c, e, d);
	printf("29 - %-.1i, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d\n", i, j, k, l, m, c, e, d);//29
	ft_printf("29 - %-.1i, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d\n", i, j, k, l, m, c, e, d);
	printf("30 - %-0.1i, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d\n", i, j, k, l, m, c, e, d);//30
	ft_printf("30 - %-0.1i, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d\n", i, j, k, l, m, c, e, d);
	printf("31 - %-1.0i, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d\n", i, j, k, l, m, c, e, d);//31
	ft_printf("31 - %-1.0i, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d\n", i, j, k, l, m, c, e, d);
	printf("32 - %-1.1i, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d\n", i, j, k, l, m, c, e, d);//32
	ft_printf("32 - %-1.1i, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d\n", i, j, k, l, m, c, e, d);
	printf("33 - %1.0i, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d\n", i, j, k, l, m, c, e, d);//33
	ft_printf("33 - %1.0i, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d\n", i, j, k, l, m, c, e, d);

/////////////////////////////////////////////

	printf("%d - %*i, %*d, %*d, %*d, %*d, %*d, %*d, %*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %*i, %*d, %*d, %*d, %*d, %*d, %*d, %*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;
	printf("%d - %0*i, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %0*i, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;
	printf("%d - %-*i, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %-*i, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;
	printf("%d - %.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;

// /////////////////////////////////////////////

	a = -3;
	printf("%d - %*i, %*d, %*d, %*d, %*d, %*d, %*d, %*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %*i, %*d, %*d, %*d, %*d, %*d, %*d, %*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;
	printf("%d - %0*i, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %0*i, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;
	printf("%d - %0*i, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %-*i, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;
	printf("%d - %.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;

// /////////////////////////////////////////////

	a = -2;
	printf("%d - %*i, %*d, %*d, %*d, %*d, %*d, %*d, %*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %*i, %*d, %*d, %*d, %*d, %*d, %*d, %*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;
	printf("%d - %0*i, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %0*i, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;
	printf("%d - %-*i, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %-*i, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;
	printf("%d - %.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;

// /////////////////////////////////////////////

	a = -1;
	printf("%d - %*i, %*d, %*d, %*d, %*d, %*d, %*d, %*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %*i, %*d, %*d, %*d, %*d, %*d, %*d, %*d\n", count,  a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;
	printf("%d - %0*i, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %0*i, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;
	printf("%d - %-*i, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %-*i, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;
	printf("%d - %.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;

/////////////////////////////////////////////

	a = 0;
	printf("%d - %*i, %*d, %*d, %*d, %*d, %*d, %*d, %*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %*i, %*d, %*d, %*d, %*d, %*d, %*d, %*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;
	printf("%d - %0*i, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %0*i, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;
	printf("%d - %-*i, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %-*i, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;
	printf("%d - %.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;

// /////////////////////////////////////////////

	a = 1;
	printf("%d - %*i, %*d, %*d, %*d, %*d, %*d, %*d, %*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %*i, %*d, %*d, %*d, %*d, %*d, %*d, %*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;
	printf("%d - %0*i, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %0*i, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;
	printf("%d - %-*i, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %-*i, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;
	printf("%d - %.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;

/////////////////////////////////////////////

	a = 2;
	printf("%d - %*i, %*d, %*d, %*d, %*d, %*d, %*d, %*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %*i, %*d, %*d, %*d, %*d, %*d, %*d, %*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;
	printf("%d - %0*i, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %0*i, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;
	printf("%d - %-*i, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %-*i, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;
	printf("%d - %.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;

///////////////////////////////////////////

	a = 3;
	printf("%d - %*i, %*d, %*d, %*d, %*d, %*d, %*d, %*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %*i, %*d, %*d, %*d, %*d, %*d, %*d, %*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;
	printf("%d - %0*i, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %0*i, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;
	printf("%d - %-*i, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %-*i, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;
	printf("%d - %.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;

/////////////////////////////////////////////

	a = 4;
	printf("%d - %*i, %*d, %*d, %*d, %*d, %*d, %*d, %*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %*i, %*d, %*d, %*d, %*d, %*d, %*d, %*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;
	printf("%d - %0*i, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %0*i, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;
	printf("%d - %-*i, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %-*i, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;
	printf("%d - %.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	ft_printf("%d - %.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d\n", count, a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	count++;

/////////////////////////////////////////////

	a = -2;
	while(a < 5) //T70-177
	{
		b = -2;
		while (b < 5)
		{
			ft_printf("a = %d, b = %d\n", a, b);
			printf("%d - %*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d\n", count, a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
			ft_printf("%d - %*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d\n", count, a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
			count++;
			printf("%d - %-*.*i, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d\n", count, a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);	
			ft_printf("%d - %-*.*i, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d\n", count, a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
			count++;
			printf("%d - %0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d\n", count, a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);	
			ft_printf("%d - %0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d\n", count, a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
			count++;
			b++;
		}
		a++;
	}

/////////////////////////////////////////////

	a = 19;
	b = 14;
	printf("178 - %*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d\n", a, b, -42, a, b, 42, -a, -b, -42, -a, -b, 42, -a, b, -42, -a, b, 42, a, -b, -42, a, -b, 42);
	ft_printf("178 - %*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d\n", a, b, -42, a, b, 42, -a, -b, -42, -a, -b, 42, -a, b, -42, -a, b, 42, a, -b, -42, a, -b, 42);
	printf("179 - %12.12i, %12.12d\n", -42, 42);
	ft_printf("179 - %12.12i, %12.12d\n", -42, 42);
	printf("180 - %1s, %1s, %1s, %1s, %1s\n", n, o, p, q, r);
	ft_printf("180 - %1s, %1s, %1s, %1s, %1s\n", n, o, p, q, r);
	printf("181 - %2s, %2s, %2s, %2s, %2s\n", n, o, p, q, r);
	ft_printf("181 - %2s, %2s, %2s, %2s, %2s\n", n, o, p, q, r);
	printf("182 - %3s, %3s, %3s, %3s, %3s\n", n, o, p, q, r);
	ft_printf("182 - %3s, %3s, %3s, %3s, %3s\n", n, o, p, q, r);
	printf("183 - %4s, %4s, %4s, %4s, %4s\n", n, o, p, q, r);
	ft_printf("183 - %4s, %4s, %4s, %4s, %4s\n", n, o, p, q, r);
	printf("184 - %15s, %15s, %15s, %15s, %15s\n", n, o, p, q, r);
	ft_printf("184 - %15s, %15s, %15s, %15s, %15s\n", n, o, p, q, r);
	printf("185 - %16s, %16s, %16s, %16s, %16s\n", n, o, p, q, r);
	ft_printf("185 - %16s, %16s, %16s, %16s, %16s\n", n, o, p, q, r);
	printf("186.1 - %17s, %17s, %17s, %17s, %17s\n", n, o, p, q, r);
	ft_printf("186.1 - %17s, %17s, %17s, %17s, %17s\n", n, o, p, q, r);
	printf("186.2 - %.s, %.s, %.s, %.s, %.s\n", n, o, p, q, r);
	ft_printf("186.2 - %.s, %.s, %.s, %.s, %.s\n", n, o, p, q, r);
	printf("186.3 - %1.s, %1.s, %1.s, %1.s, %1.s\n", n, o, p, q, r);
	ft_printf("186.3 - %1.s, %1.s, %1.s, %1.s, %1.s\n", n, o, p, q, r);

/////////////////////////////////////////////

	a = -4;
	count = 187;
	while (a < 5)
	{
		ft_printf("a = %d", a);
		printf("%d - %*s, %*s, %*s, %*s, %*s, %*s, %*s, %*s\n", count, a, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u);
		ft_printf("%d - %*s, %*s, %*s, %*s, %*s, %*s, %*s, %*s\n", count, a, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u);
		count++;
		printf("%d - %-*s, %-*s, %-*s, %-*s, %-*s, %-*s, %-*s, %-*s\n", count, a, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u);
		ft_printf("%d - %-*s, %-*s, %-*s, %-*s, %-*s, %-*s, %-*s, %-*s\n", count, a, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u);
		count++;
		printf("%d - %.*s, %.*s, %.*s, %.*s, %.*s, %.*s, %.*s, %.*s\n", count, a, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u);
		ft_printf("%d - %.*s, %.*s, %.*s, %.*s, %.*s, %.*s, %.*s, %.*s\n", count, a, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u);
		count++;
		a++;
	}

/////////////////////////////////////////////

	a = -2;
	count = 70;
	while (a < 5) //T70-177
	{
		b = -2;
		while (b < 5)
		{
			ft_printf("a = %d, b = %d\n", a, b);
			printf("%d - %*.*s, %*.*s, %*.*s, %*.*s, %*.*s, %*.*s, %*.*s, %*.*s\n", count, a, b, n, a, b, o, a, b, p, a, b, q, a, b, r, a, b, s, a, b, t, a, b, u);
			ft_printf("%d - %*.*s, %*.*s, %*.*s, %*.*s, %*.*s, %*.*s, %*.*s, %*.*s\n", count, a, b, n, a, b, o, a, b, p, a, b, q, a, b, r, a, b, s, a, b, t, a, b, u);
			count++;
			printf("%d - %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s\n", count, a, b, n, a, b, o, a, b, p, a, b, q, a, b, r, a, b, s, a, b, t, a, b, u);
			ft_printf("%d - %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s\n", count, a, b, n, a, b, o, a, b, p, a, b, q, a, b, r, a, b, s, a, b, t, a, b, u);
			count++;
			b++;
		}
		a++;
	}

// /////////////////////////////////////////////

	printf("214 - %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X\n", i, i, i, j, j, j, k, k, k, l, l, l, m, m, m, c, c, c, d, d, d, e, e, e);
	ft_printf("214 - %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X\n", i, i, i, j, j, j, k, k, k, l, l, l, m, m, m, c, c, c, d, d, d, e, e, e);

// /////////////////////////////////////////////
	
	a = -1;
	count = 214;
	while (a < 5) //T214-256
	{
		ft_printf("a = %d\n", a);
		printf("%d - %*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X\n", count, a, i, a, i, a, i, a, j, a, j, a, j, a, k, a, k, a, k, a, l, a, l, a, l, a, m, a, m, a, m, a, c, a, c, a, c, a, d, a, d, a, d, a, e, a, e, a, e);
		ft_printf("%d - %*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X\n", count, a, i, a, i, a, i, a, j, a, j, a, j, a, k, a, k, a, k, a, l, a, l, a, l, a, m, a, m, a, m, a, c, a, c, a, c, a, d, a, d, a, d, a, e, a, e, a, e);
		count++;
		printf("%d - %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X\n", count, a, i, a, i, a, i, a, j, a, j, a, j, a, k, a, k, a, k, a, l, a, l, a, l, a, m, a, m, a, m, a, c, a, c, a, c, a, d, a, d, a, d, a, e, a, e, a, e);
		ft_printf("%d - %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X\n", count, a, i, a, i, a, i, a, j, a, j, a, j, a, k, a, k, a, k, a, l, a, l, a, l, a, m, a, m, a, m, a, c, a, c, a, c, a, d, a, d, a, d, a, e, a, e, a, e);
		count++;
		printf("%d - %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X\n", count, a, i, a, i, a, i, a, j, a, j, a, j, a, k, a, k, a, k, a, l, a, l, a, l, a, m, a, m, a, m, a, c, a, c, a, c, a, d, a, d, a, d, a, e, a, e, a, e);
		ft_printf("%d - %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X\n", count, a, i, a, i, a, i, a, j, a, j, a, j, a, k, a, k, a, k, a, l, a, l, a, l, a, m, a, m, a, m, a, c, a, c, a, c, a, d, a, d, a, d, a, e, a, e, a, e);
		count++;
		printf("%d - %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X\n", count, a, i, a, i, a, i, a, j, a, j, a, j, a, k, a, k, a, k, a, l, a, l, a, l, a, m, a, m, a, m, a, c, a, c, a, c, a, d, a, d, a, d, a, e, a, e, a, e);
		ft_printf("%d - %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X\n", count, a, i, a, i, a, i, a, j, a, j, a, j, a, k, a, k, a, k, a, l, a, l, a, l, a, m, a, m, a, m, a, c, a, c, a, c, a, d, a, d, a, d, a, e, a, e, a, e);
		count++;
		a++;
	}

/////////////////////////////////////////////

	a = -1;
	count = 257;
	while(a < 5) //T257-346
	{
		b = -1;
		while (b < 5)
		{
			ft_printf("a = %d, b = %d\n", a, b);
			printf("%d - %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X\n", count, a, b, i, a, b, i, a, b, i, a, b, j, a, b, j, a, b, j, a, b, k, a, b, k, a, b, k, a, b, l, a, b, l, a, b, l, a, b, m, a, b, m, a, b, m, a, b, c, a, b, c, a, b, c, a, b, d, a, b, d, a, b, d, a, b, e, a, b, e, a, b, e);
			ft_printf("%d - %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X\n", count, a, b, i, a, b, i, a, b, i, a, b, j, a, b, j, a, b, j, a, b, k, a, b, k, a, b, k, a, b, l, a, b, l, a, b, l, a, b, m, a, b, m, a, b, m, a, b, c, a, b, c, a, b, c, a, b, d, a, b, d, a, b, d, a, b, e, a, b, e, a, b, e);
			count++;
			printf("%d - %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X\n", count, a, b, i, a, b, i, a, b, i, a, b, j, a, b, j, a, b, j, a, b, k, a, b, k, a, b, k, a, b, l, a, b, l, a, b, l, a, b, m, a, b, m, a, b, m, a, b, c, a, b, c, a, b, c, a, b, d, a, b, d, a, b, d, a, b, e, a, b, e, a, b, e);
			ft_printf("%d - %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X\n", count, a, b, i, a, b, i, a, b, i, a, b, j, a, b, j, a, b, j, a, b, k, a, b, k, a, b, k, a, b, l, a, b, l, a, b, l, a, b, m, a, b, m, a, b, m, a, b, c, a, b, c, a, b, c, a, b, d, a, b, d, a, b, d, a, b, e, a, b, e, a, b, e);
			count++;
			printf("%d - %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X\n", count, a, b, i, a, b, i, a, b, i, a, b, j, a, b, j, a, b, j, a, b, k, a, b, k, a, b, k, a, b, l, a, b, l, a, b, l, a, b, m, a, b, m, a, b, m, a, b, c, a, b, c, a, b, c, a, b, d, a, b, d, a, b, d, a, b, e, a, b, e, a, b, e);
			ft_printf("%d - %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X\n", count, a, b, i, a, b, i, a, b, i, a, b, j, a, b, j, a, b, j, a, b, k, a, b, k, a, b, k, a, b, l, a, b, l, a, b, l, a, b, m, a, b, m, a, b, m, a, b, c, a, b, c, a, b, c, a, b, d, a, b, d, a, b, d, a, b, e, a, b, e, a, b, e);
			count++;
			b++;
		}
		a++;
	}

/////////////////////////////////////////////

	printf("347 - %p, %x, %p, %x, %p, %x, %p, %x\n", (void *)209590960, 209590960, (void *)207038912, 207038912, (void *)1, 1, NULL, 0); //T347
	ft_printf("347 - %p, %x, %p, %x, %p, %x, %p, %x\n", (void *)209590960, 209590960, (void *)207038912, 207038912, (void *)1, 1, NULL, 0); //T347

/////////////////////////////////////////////

	a = 8;
	count = 348;
	while (a < 12) //348-355
	{
		ft_printf("a = %d\n", a);
		printf("%d - %*p, %*x, %*p, %*x, %*p, %*x, %*p, %*x\n", count, a, (void *)209590960, a, 209590960, a, (void *)207038912, a, 207038912, a, (void *)1, a, 1, a, NULL, a, 0);
		ft_printf("%d - %*p, %*x, %*p, %*x, %*p, %*x, %*p, %*x\n", count, a, (void *)209590960, a, 209590960, a, (void *)207038912, a, 207038912, a, (void *)1, a, 1, a, NULL, a, 0);
		count++;
		printf("%d - %-*p, %-*x, %-*p, %-*x, %-*p, %-*x, %-*p, %-*x\n", count, a, (void *)209590960, a, 209590960, a, (void *)207038912, a, 207038912, a, (void *)1, a, 1, a, NULL, a, 0);
		ft_printf("%d - %-*p, %-*x, %-*p, %-*x, %-*p, %-*x, %-*p, %-*x\n", count, a, (void *)209590960, a, 209590960, a, (void *)207038912, a, 207038912, a, (void *)1, a, 1, a, NULL, a, 0);
		count++;
		a++;
	}

/////////////////////////////////////////////

	a = f;
	b = g;
	printf("356 - %-*.*i, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c);
	ft_printf("356 - %-*.*i, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c);
	printf("357 - %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s\n", a, b, n, a, b, o, a, b, p, a, b, q, a, b, r, a, b, s, a, b, t, a, b, u);
	ft_printf("357 - %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s\n", a, b, n, a, b, o, a, b, p, a, b, q, a, b, r, a, b, s, a, b, t, a, b, u);
	printf("358 - %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X\n", a, b, i, a, b, i, a, b, i, a, b, j, a, b, j, a, b, j, a, b, k, a, b, k, a, b, k, a, b, l, a, b, l, a, b, l, a, b, m, a, b, m, a, b, m, a, b, c, a, b, c, a, b, c, a, b, d, a, b, d, a, b, d, a, b, e, a, b, e, a, b, e);
	ft_printf("358 - %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X\n", a, b, i, a, b, i, a, b, i, a, b, j, a, b, j, a, b, j, a, b, k, a, b, k, a, b, k, a, b, l, a, b, l, a, b, l, a, b, m, a, b, m, a, b, m, a, b, c, a, b, c, a, b, c, a, b, d, a, b, d, a, b, d, a, b, e, a, b, e, a, b, e);
	printf("359 - %-*p, %-*x, %-*p, %-*x, %-*p, %-*x, %-*p, %-*x\n", a, (void *)209590960, a, 209590960, a, (void *)207038912, a, 207038912, a, (void *)1, a, 1, a, NULL, a, 0);
	ft_printf("359 - %-*p, %-*x, %-*p, %-*x, %-*p, %-*x, %-*p, %-*x\n", a, (void *)209590960, a, 209590960, a, (void *)207038912, a, 207038912, a, (void *)1, a, 1, a, NULL, a, 0);

/////////////////////////////////////////////

	a = 12;
	b = 18;
	printf("360 - %c,  %-c, %1c, %*c,  %-*c,  %*c, %-*c\n", c, n[0], o[0], a, p[0], a, q[0], a, r[0], a, c);
	ft_printf("360 - %c,  %-c, %1c, %*c,  %-*c,  %*c, %-*c\n", c, n[0], o[0], a, p[0], a, q[0], a, r[0], a, c);
	printf("361 - %c,  %-c, %1c, %*c,  %-*c,  %*c, %-*c\n", c, n[0], o[0], -a, p[0], -a, q[0], -a, r[0], -a, c);
	ft_printf("361 - %c,  %-c, %1c, %*c,  %-*c,  %*c, %-*c\n", c, n[0], o[0], -a, p[0], -a, q[0], -a, r[0], -a, c);
	printf("362 - %c,  %-c, %1c, %*c,  %-*c,  %*c, %-*c\n", c, n[0], q[0], a, q[0], a, p[0], a, p[0], a, c);
	ft_printf("362 - %c,  %-c, %1c, %*c,  %-*c,  %*c, %-*c\n", c, n[0], q[0], a, q[0], a, p[0], a, p[0], a, c);
	printf("363 - %c,  %-c, %1c, %*c,  %-*c,  %*c\n", -12, -1, -255, a, -12, a, -1, a, -255);
	ft_printf("363 - %c,  %-c, %1c, %*c,  %-*c,  %*c\n", -12, -1, -255, a, -12, a, -1, a, -255);
	printf("364 - %%, \t, \\, \", \', +\n");
	ft_printf("364 - %%, \t, \\, \", \', +\n");
	printf("365 - %%%dbada%s%%**%s**-d%%0*d%-12s0*@\n", h, "bada", r, p, r, r, i, r, i, r, i);
	ft_printf("365 - %%%dbada%s%%**%s**-d%%0*d%-12s0*@\n", h, "bada", r, p, r, r, i, r, i, r, i);
	printf("366 - %-00000-----*i, %---0.*d, %0-0-0-0-0.*d, %-0-0-0-0-.*d, %-----.*d\n", a, i, a, i, a, i, a, i, a, i);
	ft_printf("366 - %-00000-----*i, %---0.*d, %0-0-0-0-0.*d, %-0-0-0-0-.*d, %-----.*d\n", a, i, a, i, a, i, a, i, a, i);
	printf("367 - %-00000-----*i, %---0.*d, %0-0-0-0-0.*d, %-0-0-0-0-.*d, %-----.*d\n", a, j, a, j, a, j, a, j, a, j);
	ft_printf("367 - %-00000-----*i, %---0.*d, %0-0-0-0-0.*d, %-0-0-0-0-.*d, %-----.*d\n", a, j, a, j, a, j, a, j, a, j);
	printf("368 - %-00000-----*i, %---0.*d, %0-0-0-0-0.*d, %-0-0-0-0-.*d, %-----.*d\n", a, l, a, l, a, l, a, l, a, l);
	ft_printf("368 - %-00000-----*i, %---0.*d, %0-0-0-0-0.*d, %-0-0-0-0-.*d, %-----.*d\n", a, l, a, l, a, l, a, l, a, l);
	printf("369 - %i, %d, %d, %d, %d, %d, %u, %x, %X\n", 0, 0, 0, 0, 0, 0, 0, 0, 0);
	ft_printf("369 - %i, %d, %d, %d, %d, %d, %u, %x, %X\n", 0, 0, 0, 0, 0, 0, 0, 0, 0);
	printf("370 - %*i, %*d, %*d, %*d, %*d, %*d, %*u, %*x, %*X\n", a, 0, a, 0, a, 0, a, 0, a, 0, a, 0, a, 0, a, 0, a, 0);
	ft_printf("370 - %*i, %*d, %*d, %*d, %*d, %*d, %*u, %*x, %*X\n", a, 0, a, 0, a, 0, a, 0, a, 0, a, 0, a, 0, a, 0, a, 0);
	printf("371 - %c, %-c, %12c, %-3c, %-1c, %1c, %-2c, %-4c, %5c, %3c, %-*c, %-*c, %*c, %*c\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0);
	ft_printf("371 - %c, %-c, %12c, %-3c, %-1c, %1c, %-2c, %-4c, %5c, %3c, %-*c, %-*c, %*c, %*c\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0);
	printf("372 - %-2s, %.s, %-4s, %-2.4s, %-8.12s, %3s, %8s, %---2s, %.*s, %.0s, %.1s, %.2s, %.4s, %.8s\n", NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -2, NULL, NULL, NULL, NULL, NULL, NULL);
	ft_printf("372 - %-2s, %.s, %-4s, %-2.4s, %-8.12s, %3s, %8s, %---2s, %.*s, %.0s, %.1s, %.2s, %.4s, %.8s\n", NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -2, NULL, NULL, NULL, NULL, NULL, NULL);

/////////////////////////////////////////////
	return (0);
}
