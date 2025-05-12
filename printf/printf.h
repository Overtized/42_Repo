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

int ft_printf(const char *, ...);
int ft_putchar(char c);
int	ft_putnbr(int n);
int ft_putstr( const char *format);
int	ft_putnbr_base(int n, char *base);

#endif