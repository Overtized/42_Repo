/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchanlia <mchanlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:02:05 by mchanlia          #+#    #+#             */
/*   Updated: 2025/04/29 11:02:05 by mchanlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	char	*chars1;
	char	*chars2;
	unsigned int	i;

	i = 0;
	chars1 = s1;
	chars2 = s2;
	while (((chars1[i] && chars2[i]) && (i < n) && (chars1[i] == chars2[i])))
	{
		i++;
	}
	return (chars1[i] - chars2[i]);
}