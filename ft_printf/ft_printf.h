/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 14:36:28 by hkoev             #+#    #+#             */
/*   Updated: 2023/05/19 16:30:12 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

char	*ft_itoa(int n);
char	*ft_uitoa(unsigned int n);
int		ft_hexlen(unsigned long long int n);
char	*ft_uiptox(void *ptr);
char	*ft_itox(unsigned long int n, char format, int len);
void	ft_write(char *s, int *count);
size_t	ft_strcpy(char *dst, const char *src);
int		ft_printf(const char *str, ...);
int		ft_printf_args_c(va_list args, int *count);
int		ft_printf_args_i(va_list args, int *count);
int		ft_printf_args_p(va_list args, int *count);
int		ft_printf_args_s(va_list args, int *count);
int		ft_printf_args_u(va_list args, int *count);
int		ft_printf_args_x(va_list args, char format, int *count);

#endif