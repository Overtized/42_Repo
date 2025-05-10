/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchanlia <mchanlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 09:35:07 by mchanlia          #+#    #+#             */
/*   Updated: 2025/05/10 09:35:07 by mchanlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <printf.h>

char *ft_check_format(const char *format)
{
	char * type_format;
	size_t len;

	len = ft_strlen(format);
	type_format = calloc(sizeof(char), len + 1);
	if (!type_format)
		return (NULL);
	
	return (type_format);
}