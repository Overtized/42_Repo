/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchanlia <mchanlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:07:07 by mchanlia          #+#    #+#             */
/*   Updated: 2025/04/29 10:07:07 by mchanlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	const unsigned char		*str;

	i = 0;
	str = (const unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char) c)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
// int main(void)
// {
// 	char *s = "salut salomé";
// 	int c = '\0';
// 	size_t n = 10;

// 	printf("%p", ft_memchr(s,c,n));
// 	return 0;
// }