/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchanlia <mchanlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:07:07 by mchanlia          #+#    #+#             */
/*   Updated: 2025/04/29 10:07:07 by mchanlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	char *char_s;

	i = 0;
	char_s = s;
	while(i < n && char_s[i] != c)
	{
		i++;
	}
	return(char_s + i);
}
