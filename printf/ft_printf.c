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
	va_list ap;

	va_start(ap, format);
	int i;
	size_t len;

	i = 0;
	len = 0;
	while(format[i])
	{
		if(format[i] == '%')
		{
			i++;
			len += ft_check_format(format[i]);
			ft_putconverted(format[i]);
		}
		else
		{
			ft_putchar(format[i]);
			i++;
			len ++;
		}
	}
	va_end(ap);
	return(len);
}

int main(void){
	printf("%s\n salut %d\n bonjour", "hello", 2);
}
