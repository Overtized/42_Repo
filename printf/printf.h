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
#include "stdarg.h"

int ft_printf(const char *, ...);
int ft_format(const char * format, ...);
int ft_check_format(const char *format);
int ft_check_format_d_i(const char * format);
int ft_check_format_s(const char * format);
int ft_check_format_ulo(const char * format);
int ft_check_format_x(const char * format);
int ft_check_format_Xup(const char * format);
int ft_check_format_c(const char * format);
int ft_check_format_p(const char * format);
int ft_check_format_u(const char * format);
void ft_putchar(char c);

#endif