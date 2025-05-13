/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putconverted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchanlia <mchanlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:02:22 by mchanlia          #+#    #+#             */
/*   Updated: 2025/05/13 17:34:35 by mchanlia         ###   ########.fr       */
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
		return (ft_putchar_int(va_arg(ap, int)));
	else if (format[i] == 's')
		return (ft_putstr_int(va_arg(ap, char *)));
	else if (format[i] == 'p')
		return (ft_putvp(va_arg(ap, void *), "0123456789abcdef"));
	else if (format[i] == 'd' || format[i] == 'i')
		return (ft_putnbr(va_arg(ap, int),"0123456789"));
	else if (format[i] == 'u')
		return (ft_putnbr_unsigned(va_arg(ap, unsigned int), "0123456789"));
	else if (format[i] == 'x')
		return (ft_putnbr_base(va_arg(ap, int), "0123456789abcdef"));
	else if (format[i] == 'X')
		return (ft_putnbr_base(va_arg(ap, int), "0123456789ABCDEF"));
	else if (format[i] == '%')
		return (ft_putchar(format[i]));
}
