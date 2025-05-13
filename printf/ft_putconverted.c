/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putconverted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchanlia <mchanlia@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:02:22 by mchanlia          #+#    #+#             */
/*   Updated: 2025/05/13 14:52:30 by mchanlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"

int	ft_putconverted(const char *format, va_list ap, ...)
{
	size_t i;
	
	i = 0; 
	va_start(ap, format);
	if (format[i] == 'c')
		return (ft_putchar_int(va_arg(ap, int))); // default argument promotion
	else if (format[i] == 's')
		return (ft_putstr_int(va_arg(ap, char *))); // check sqns len avec return et check len printf
	else if (format[i] == 'p')
		return (ft_putptr_int(va_arg(ap, void *), format[i]));
	else if (format[i] == 'd' || format[i] == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	else if (format[i] == 'u')
		return (ft_putnbr_u(va_arg(ap, unsigned int), format[i]));
	else if (format[i] == 'x')
		return (ft_putnbr_base(va_arg(ap, int), format[i]));
	else if (format[i] == 'X')
		return (ft_putnbr_base_up(va_arg(ap, int), format[i]));
	else if (format[i] == '%')
		lreturn (ft_putchar(format[i]));
}
