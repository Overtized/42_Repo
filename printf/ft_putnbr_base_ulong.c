/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ulong.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchanlia <mchanlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 19:38:03 by mchanlia          #+#    #+#             */
/*   Updated: 2025/05/12 19:38:03 by mchanlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

bool	checkbase(char *base)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(base);
	if (len != 10)
		return (false);
	while(base[i])
	{
		if (base[i] >= '0' && base[i] <= '9')
			i++;
		else
			return(false);
	}
	return (true);
}

int	ft_putnbr_ulong(unsigned long n, char *base)
{
	int	len; 
	int	baselen;

	baselen = ft_strlen(base);
	len = 0;
	if (checkbase)
	{
		if (n > 9)
		{
			len += ft_putnbr(n / baselen);
			len += ft_putnbr(n % baselen);
		}
		else
			len += ft_putchar(n + '0');
		return (len);
	}
	return (0);
}
