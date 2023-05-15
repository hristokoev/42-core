/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 14:36:28 by hkoev             #+#    #+#             */
/*   Updated: 2023/05/15 19:08:12 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
 
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>


 void    ft_write(char *s);
 int ft_printf_args_c(va_list args);
 int ft_printf_args_i(va_list args);
 int ft_printf_args_p(va_list args);
 int ft_printf_args_s(va_list args);
 int ft_printf_args_u(va_list args);
 int ft_printf_args_x(va_list args, char format);
 int	ft_printf(const char *str, ...);
 size_t	ft_strcpy(char *dst, const char *src);
 char   *ft_uint_to_str(unsigned int n);
 char *ft_uintptr_to_hex(void *ptr);
 int	ft_hexlen(unsigned int n);
 char	*ft_itoa(int n);
 char   *ft_itox(int n, char format);

#endif