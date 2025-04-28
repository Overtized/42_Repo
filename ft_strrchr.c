/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchanlia <mchanlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:10:50 by mchanlia          #+#    #+#             */
/*   Updated: 2025/04/28 14:35:04 by mchanlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    int j;
    int strlen;
    int cursor;
    
    i = 0;
    j = 0;
    strlen = ft_strlen(s);
    
    while (s[i])
    {
        if (s[i] == c)
            cursor = i;
        i++;
    }
    /*if (i = strlen)
    {
        return (NULL);
    }*/
    
 return (&s[cursor]);//s + i - j);
}