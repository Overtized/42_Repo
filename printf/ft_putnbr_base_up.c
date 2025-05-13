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

#include "printf.h"

bool	checkhexbase(char *base)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(base);
	if (len != 16)
		return (false);
	while(base[i])
	{
		if (base[i] >= '0' && base[i] <= '9' && base[i] >= 'A' && base[i] <= 'F')
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

int	ft_putnbr_base_up(int n, char *base)
{
	int	len; 
	int	baselen;

	baselen = ft_strlen(base);
	len = 0;
	if (checkhexbase)
	{
		if (n == INT_MIN)
			ft_check_nmin(n);
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
	return (0);
}