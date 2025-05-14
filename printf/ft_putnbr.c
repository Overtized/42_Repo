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

#include "ft_printf.h"

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
int	ft_check_nmin(int n)
{
	int len;

	len = 0;
	write(1, "-2147483648", 11);
	return (len + 11);
}

int	ft_putnbr(int n, char *base)
{
	int	len; 
	int	baselen;

	baselen = ft_strlen(base);
	len = 0;
	if (checkbase)
	{
		if (n == INT_MIN)
			ft_check_nmin(n);
		if (n > 9)
		{
			len += ft_putnbr(n / baselen, base);
			len += ft_putnbr(n % baselen, base);
		}
		else
			len += ft_putchar(n + '0');
		return (len);
	}
	return (0);
}
// a voir si len a bien la bonne valeur si bug