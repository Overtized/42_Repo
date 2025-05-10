/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchanlia <mchanlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 09:08:06 by mchanlia          #+#    #+#             */
/*   Updated: 2025/05/10 09:08:06 by mchanlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF.H
#define PRINTF.H

#include "libft.h"
#include "stdarg.h"

int ft_printf(const char *, ...);
char *ft_check_format(const char *format);


#endif