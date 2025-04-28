/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchanlia <mchanlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 17:19:23 by mchanlia          #+#    #+#             */
/*   Updated: 2025/04/24 13:28:14 by mchanlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
int ft_strlen(char *str)
{
    int counter;
    while (*str)
    {
        counter++;
        str++;
    }
    return (counter);
}
int ft_strlcat(char *dst, const char *src, size_t siz)
{
 unsigned int len;
 unsigned int i;
 unsigned int j;
 j = 0;
 i = ft_strlen(dst);
if (siz < strlen(dst))
    return siz;
 while (src[j] && i < siz -1)
 {
    dst[i] = src[j];
    i++;
    j++;
 }
 dst[i] = '\0';
 len = i;
 return (len);
}
int main(void)
{
    char dest[50] = "";
    char dst[50] = "";
    const char *src;
    int size;
    
    src = " salut";
    size = 10;
    printf("%d \n",ft_strlcat(dst, src, size));
    printf("%d \n",strlcat(dest, src, size));
    return 0;
}