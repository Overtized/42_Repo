/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchanlia <mchanlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:36:42 by mchanlia          #+#    #+#             */
/*   Updated: 2025/04/28 11:58:25 by mchanlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#ifndef LIBFT_H
#define LIBFT_H

int ft_atoi(char *str);
int ft_isalnum(char c);
int ft_isalpha(char c);
int ft_isascii(char c);
int ft_isdigit(char c);
int ft_isprint(char c);
void	*ft_memset(void *s, int c, size_t n);
void *memmove(void *dest, const void *src, size_t n);
char *ft_strchr(const char *s, int c);
int ft_strlcat(char *dst, const char *src, size_t siz);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
int ft_strlen(char *str);
int ft_strncmp(char *str1, char *str2, unsigned int n);
int ft_tolower(int c);
int ft_toupper( int c);
void ft_bzero(void *s, size_t n);








#endif