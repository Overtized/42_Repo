/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchanlia <mchanlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 19:38:03 by mchanlia          #+#    #+#             */
/*   Updated: 2025/05/12 19:38:03 by mchanlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr_u(unsigned int n)
{
	int	len;

	len = 0;
	// if (n == INT_MIN)
	// {
	// 	write(1, "-2147483648", 11);
	// 	return (len + 11);
	// }
	// if (n < 0)
	// {
	// 	len += ft_putchar('-');
	// 	n = -n;
	// }
	if (n > 9)
	{
		len += ft_putnbr_u(n / 10);
		len += ft_putnbr_u(n % 10);
	}
	else
	{
		len += ft_putchar_int(n + '0');
	}
	return (len);
}
// a voir si len a bien la bonne valeur si bug