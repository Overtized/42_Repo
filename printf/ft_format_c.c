/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchanlia <mchanlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 10:20:47 by mchanlia          #+#    #+#             */
/*   Updated: 2025/05/11 10:20:47 by mchanlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_check_format_c(const char * format)
{
	size_t len;
	size_t i;

	len = 0;
	i = 0;
	if (format[i] == 'c')
	{
		len++;
		ft_putchar(format[i]);
	}
	return (len);
}