/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchanlia <mchanlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 19:35:57 by mchanlia          #+#    #+#             */
/*   Updated: 2025/05/12 19:35:57 by mchanlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchanlia <mchanlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 19:38:03 by mchanlia          #+#    #+#             */
/*   Updated: 2025/05/12 19:38:03 by mchanlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

bool checkbase(char *base)
{
	size_t len;

	len = 0;
		return (false);
	return (true);

	// check des bases a faire 
}

int	ft_putnbr_base_up(int n, char *base)
{
	int	len;
	int baselen;

	baselen = ft_strlen(base);
	len = 0;
	if (n == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return (len + 11);
	}
	if (n < 0)
	{
		len += ft_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		len += ft_putnbr(n / baselen);
		len += ft_putnbr(n % baselen);
	}
	else
		len += ft_putchar(n + '0' - 32);
	return (len);
}
// a voir si len a bien la bonne valeur si bug