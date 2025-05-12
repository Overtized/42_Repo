/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchanlia <mchanlia@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 10:20:47 by mchanlia          #+#    #+#             */
/*   Updated: 2025/05/12 14:59:00 by mchanlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"

int ft_check_format_c(const char * format, ...)
{
	va_list ap;
	size_t len;
	size_t i;

	va_start(ap, format);

	len = 0;
	i = 0;
	if (format[i] == 'c')
	{
		len++;
		ft_putchar(format[i]);
	}
	return (len);
}