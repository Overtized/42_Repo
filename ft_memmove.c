/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchanlia <mchanlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:26:20 by mchanlia          #+#    #+#             */
/*   Updated: 2025/04/28 13:50:30 by mchanlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    char temp_array;
    char *dst_temp;
    char *src_temp;
    
    i = 0;
    ft_bzero(dest, n);
    dst_temp = dest;
    src_temp = src;       
    while (i < n)
    {
       ft_memset(src, src_temp[i],1);
       temp_array = src_temp[i];
       dst_temp[i] = temp_array;
       i++;
    
    }
    return (dest);
}