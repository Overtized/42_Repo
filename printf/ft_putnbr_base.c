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

#include "ft_printf.h"

bool	checkbase(char *base)
{
	size_t	baselen;
	size_t	i;

	i = 0;
	baselen = ft_strlen(base);
	if (baselen < 1 || !base)
		return (false);
	if (ft_strchr(base, '+') || ft_strchr(base, '-'))
		return(false);
	while(i < baselen - 1)
	{
		if (ft_strchr(&base[i + 1],base[i]))
			return(false);
		i++;
	}
	return (true);
}
int putminval(int n)
{
	int len;

	len = 0;
	write(1, "-2147483648", 11);
	return (len + 11);
}

int	ft_putnbr_base(int n, char *base)
{
	int	len; 
	const int baselen = ft_strlen(base);

	len = 0;
	if (checkbase)
	{
		if (n == INT_MIN)
			return(len += putminval(n));
		if (n < 0)
		{
			len += ft_putchar('-');
			n = -n;
		}
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