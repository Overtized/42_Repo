/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchanlia <mchanlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:10:19 by mchanlia          #+#    #+#             */
/*   Updated: 2025/04/29 11:10:19 by mchanlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	void			*allocated_mem;
	unsigned int	i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	allocated_mem = malloc(nmemb * size + 1);
	if (!(allocated_mem))
		return (NULL);
	ft_bzero(allocated_mem, size + 1);
	return (allocated_mem);
}
