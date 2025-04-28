/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchanlia <mchanlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:15:10 by mchanlia          #+#    #+#             */
/*   Updated: 2025/04/23 15:24:21 by mchanlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *str1, char *str2, unsigned int n)
{
    unsigned int i;
    i = 0;
    while (str1[i] && str2[i] && i < n)
    {
        if (str1[i] != str2[i])
            return str1[i] - str2[i];
        i++;   
    }
    return (0);
}
int main(void)
{
    char str1 [] = " Hello";
    char str2 [] = " Hallo";
    printf("%d", ft_strncmp(str1, str2, 5));
    return (0);
}