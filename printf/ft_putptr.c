/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchanlia <mchanlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 09:30:38 by mchanlia          #+#    #+#             */
/*   Updated: 2025/05/13 09:30:38 by mchanlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putptr(void *ptr, char *format)
{
	int len;
	long int ptrv;

	ptrv = (long int)ptr;
	len = 0;
	len += write(1,"0x", 2);
	len += ft_putnbr_base_ulong(ptrv, format);
	// recuperer pointeur , le caster en unsigned long?, ecrire ox et faire un putnbr base ulong en  hexa 
	return (len);
}