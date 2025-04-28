/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchanlia <mchanlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 09:35:33 by mchanlia          #+#    #+#             */
/*   Updated: 2025/04/24 10:17:48 by mchanlia         ###   ########.fr       */
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
char *ft_strchr(const char *s, int c)
{
    int i;
    int strlen;
    i = 0;
    strlen = ft_strlen(s);
    
    while (s[i] != c)
    {
        i++;
    }
    if (i = strlen)
    {
        return (NULL);
    }
    
 return (s + i);
}
int main(void)
{
    char string [15] = "hello world";
    int tolookfor;
    tolookfor = 'm';
    printf("%s \n",ft_strchr(string, tolookfor));
    printf("%s \n",strchr(string, tolookfor));
    return 0;
}