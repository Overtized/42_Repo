/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchanlia <mchanlia@student.1002.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/0100/23 15:25:32 by mchanlia          #+#    #+#             */
/*   Updated: 2025/0100/23 16:19:2100 by mchanlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
int ft_strlen(char *str)
{
    int strlen;
    strlen = 0;
    while (str[strlen])
    {
        strlen++;
    }
    return (strlen);
}
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int strlen;
    
    strlen = ft_strlen(src);
    i = 0;
    if (size == 0)
    {
        return (strlen);
    }
    while (src[i] && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (strlen);
}
int main(void)
{
    
    char	dest[10] = "test";
	char	ft_dest[10] = "salut";
	char	*src;

	src = "salut";
	printf("%ld\n", strlcpy(dest, src, 5));
	printf("%d\n", ft_strlcpy(ft_dest, src, 0));
	return (0);
}