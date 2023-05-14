/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 14:36:28 by hkoev             #+#    #+#             */
/*   Updated: 2023/05/14 20:02:52 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
 
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

 int	ft_printf(const char *str, ...);
 size_t	ft_strcpy(char *dst, const char *src);
 char   *ft_uint_to_str(unsigned int n);
 char   *ft_ptr_to_hex(void *ptr);
 char	*ft_itoa(int n);
 char   *ft_itox(int n, char format);

#endif