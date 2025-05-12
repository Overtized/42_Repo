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

int checkbaselen(char *base)
{
	size_t len;

	len = 0;
	while (base[len])
		len++;
	return (len);
}

int	ft_putnbr_base(int n, char *base)
{
	int	len;
	int baseconverted;

	baseconverted = ft_strlen(base);
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
		len += ft_putnbr(n / baseconverted);
		len += ft_putnbr(n % baseconverted);
	}
	else
		len += ft_putchar(n + '0');
	return (len);
}
// a voir si len a bien la bonne valeur si bug