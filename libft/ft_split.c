/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchanlia <mchanlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:17:58 by mchanlia          #+#    #+#             */
/*   Updated: 2025/05/05 10:17:58 by mchanlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countword(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

int	safemalloc(char **tabs, size_t strinpos, size_t buffer)
{
	size_t	i;

	i = 0;
	tabs[strinpos] = malloc(sizeof(char) * buffer);
	if (!tabs[strinpos])
	{
		while (i < strinpos)
		{
			free(tabs[i]);
			i++;
		}
		free(tabs);
		return (1);
	}
	return (0);
}

size_t	checklen(char const **s, char c)
{
	size_t	len;

	len = 0;
	while (**s == c)
		(*s)++;
	while (**s && **s != c)
	{
		(*s)++;
		len++;
	}
	return (len);
}

int	tabfill(char **tabs, char const *s, char c)
{
	size_t	len;
	size_t	i;

	i = 0;
	while (*s)
	{
		len = checklen(&s, c);
		if (len > 0)
		{
			if (safemalloc(tabs, i, len + 1))
				return (1);
			ft_strlcpy(tabs[i], s - len, len + 1);
			i++;
		}
		if (*s)
			s++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	token;
	char	**tabs;

	if (!s)
		return (NULL);
	if (!*s)
	{
		tabs = ft_calloc(1, sizeof(char *));
		if (!tabs)
			return (NULL);
		tabs[0] = NULL;
		return (tabs);
	}
	token = ft_countword(s, c);
	tabs = ft_calloc(token + 1, sizeof(char *));
	if (!tabs)
		return (NULL);
	if (tabfill(tabs, s, c))
		return (NULL);
	return (tabs);
}
