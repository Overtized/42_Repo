/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchanlia <mchanlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 09:08:06 by mchanlia          #+#    #+#             */
/*   Updated: 2025/05/10 09:08:06 by mchanlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
#define PRINTF_H

#include "libft.h"
#include <stdarg.h>
#include <limits.h>
#include <stdbool.h>

int ft_printf(const char *, ...);
int ft_putchar_int(char c);
int	ft_putconverted(const char *format, va_list ap, ...);
int	ft_putnbr_ulong(unsigned long n, char *base);
int	ft_putnbr_base_up(int n, char *base);
int	ft_putnbr_base(int n, char *base);
int	ft_putnbr_u(unsigned int n, char *format);
int	ft_putnbr(int n);
int	ft_putptr(void *ptr, char *format);
int ft_putstr_int( const char *format);
size_t	ft_strlen(const char *s);


#endif