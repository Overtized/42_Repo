/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchanlia <mchanlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 09:05:36 by mchanlia          #+#    #+#             */
/*   Updated: 2025/05/10 09:05:36 by mchanlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"
#include <stdarg.h>

int ft_printf(const char * format, ...)
{
	va_list arg;

	va_start(arg, format);
	int i = 0;
	while(format[i])
	{
		if(format[i++] == '%');
		{
			if (format[i] == 'c')
				ft_format_c(format);
			else if (format[i] == 's')
				ft_format_s(format);
			else if (format[i] == 'p')
				ft_format_p(format);
			else if (format[i] == 'd')// same
				ft_format_d(format);
			else if (format[i] == 'i')// same
				ft_format_i(format);
			else if (format[i] == 'u')
				ft_format_u(format);
			else if (format[i] == 'x')
				ft_format_u(format);
			else if (format[i] == 'X')
				ft_format_X(format);
			else if (format[i] == '%')
				ft_format_percents(format);
		}
		else
			ft_putchar(format[i++]);
	}
	return(1);
}

int main(void){
	printf("%s\n salut %d\n bonjour", "hello", 2);
}
