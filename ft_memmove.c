/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchanlia <mchanlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:26:20 by mchanlia          #+#    #+#             */
/*   Updated: 2025/04/28 12:07:02 by mchanlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

       void *memmove(void *dest, const void *src, size_t n)
       {
           int i;
           i = 0;
           char * temp_array [ft_strlen(src)];
        ft_bzero(dest, ft_strlen(src));
        
        while (i < n)
        {
            ft_memset(src, src[i],ft_strlen(src));
            temp_array[i] = src[i];
            dest[i] = temp_array;
            i++;
        
        }
        return (dest);
       }