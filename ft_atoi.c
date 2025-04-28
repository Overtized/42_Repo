/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchanlia <mchanlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:51:18 by mchanlia          #+#    #+#             */
/*   Updated: 2025/04/23 15:14:20 by mchanlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int ft_atoi(char *str)
{
    int i;
    int result;
    int sign;
    
    i = 0;
    result = 0;
    sign = 1;
    
    if (str[i] == '\0')
        return (0);
    while ((str[i] >= 9 && str[i] <= 13 || str[i] == 32))
            i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = (result * 10) + (str[i] - '0');
        i++;
    }  
    return (result * sign);
}
int main(void)
{
    char str[] = "    +15454fsg5465";
    printf("%d \n", ft_atoi(str));
    printf("%d \n", atoi(str));
    return (0);
}
