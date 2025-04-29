/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchanlia <mchanlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:08:16 by mchanlia          #+#    #+#             */
/*   Updated: 2025/04/29 10:08:16 by mchanlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*dst;
	char			*s;

	s = src;
	i = 0;
	while (i < n)
	{
		dst[i] = s[i];
		i++;
	}
	dest = dst;
	return (dest);
}
