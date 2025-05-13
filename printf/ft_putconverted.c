/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putconverted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchanlia <mchanlia@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:02:22 by mchanlia          #+#    #+#             */
/*   Updated: 2025/05/13 14:05:28 by mchanlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"

int	ft_putconverted(const char *format, va_list ap, ...)
{
	size_t i;
	int	len;
	i = 0; 
	len = 0;
	va_start(ap, format);
	if (format[i] == 'c')
		len += ft_putchar_int(va_arg(ap, int)); // default argument promotion
	else if (format[i] == 's')
		len += ft_putstr_int(va_arg(ap, char *));
	else if (format[i] == 'p')
		len += ft_putptr_int(va_arg(ap, void *), format[i]);
	else if (format[i] == 'd' || format[i] == 'i')
		len += ft_putnbr(va_arg(ap, int));
	else if (format[i] == 'u')
		len += ft_putnbr_u(va_arg(ap, unsigned int), format[i]);
	else if (format[i] == 'x')
		len += ft_putnbr_base(va_arg(ap, int), format[i]);
	else if (format[i] == 'X')
		len += ft_putnbr_base_up(va_arg(ap, int), format[i]);
	else if (format[i] == '%')
		len += ft_putchar(format[i]);
}
