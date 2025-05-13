/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchanlia <mchanlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 19:35:36 by mchanlia          #+#    #+#             */
/*   Updated: 2025/05/12 19:35:36 by mchanlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putstr_int( const char *format)
{
	int	len;
	int i;

	len = 0;
	i = 0;
	while (format[i])
	{
		write(1,&format, 1);
		len++;
		i++;
	}
	return (len);
}