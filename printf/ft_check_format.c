/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchanlia <mchanlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 09:35:07 by mchanlia          #+#    #+#             */
/*   Updated: 2025/05/10 09:35:07 by mchanlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <printf.h>

int ft_check_format(const char *format)
{
	size_t len;
	size_t i;

	len = 0;
	i = 0;
	while(format[i])
	{
		i++;
			if (format[i] == 'c')
				len += ft_check_format_c(format);
			else if (format[i] == 's')
				len += ft_check_format_s(format);
			else if (format[i] == 'p')
				len += ft_check_format_p(format);
			else if (format[i] == 'd' || format[i] == 'i')
				len += ft_check_format_d_i(format);
			else if (format[i] == 'u')
				len += ft_check_format_u(format);
			else if (format[i] == 'x')
				len += ft_check_format_ulo(format);
			else if (format[i] == 'X')
				len += ft_check_format_Xup(format);
			else if (format[i] == '%')
			{
				len++;
				ft_putchar('%');
			}
	}
	return (len);
}
