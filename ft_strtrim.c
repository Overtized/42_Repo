/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchanlia <mchanlia@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 17:33:04 by mchanlia          #+#    #+#             */
/*   Updated: 2025/05/02 17:33:04 by mchanlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char * s1trimmed;
	size_t start;
	size_t	end;
	size_t	len;
	size_t	i;

	i = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while ( s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start  && ft_strchr(set, s1[end]))
		end--;
	len = end - start + 1;
	if (start > end)
    {
        s1trimmed = malloc(1);
        if (!s1trimmed)
            return (NULL);
        s1trimmed[0] = '\0';
        return (s1trimmed);
    }
	s1trimmed = malloc((sizeof(char) * len) + 1);
	if (!s1trimmed)
		return (NULL);
	while (i < len)
	{
		s1trimmed[i++] = s1[start++];
	}
	s1trimmed[i] = '\0';
	return(s1trimmed);

	//  a refaire avec strlcpy et supprimer len pour revenir a 25 lignes ( lignes inutiles et optimisables)



