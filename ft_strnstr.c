/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchanlia <mchanlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:32:38 by mchanlia          #+#    #+#             */
/*   Updated: 2025/04/29 10:32:38 by mchanlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (little[j] == '\0')
	{
		return (big);
	}
	while (big[i] != '\0' && i < len)
	{
		while (little[j] == big[i + j] && big [i + j] && ((i + j) < len))
		{
			j++;
		}
		if (little[j] == '\0')
			return (&big[i]);
		else
		{
			j = 0;
		}
		i++;
	}
	return (0);
}
