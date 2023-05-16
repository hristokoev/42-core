/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 14:36:28 by hkoev             #+#    #+#             */
/*   Updated: 2023/05/16 21:10:23 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

char	*ft_itoa(int n);				// Integer to Letter
char	*ft_uitoa(unsigned int n);			// Unsigned Integer to Letter
int		ft_hexlen(unsigned int n);		// Hex length
char	*ft_uiptox(void *ptr);				// Unsigned Integer Pointer to Hex
char	*ft_itox(int n, char format);			// Integer to Hex
void	ft_write(char *s, int *count);				// Write string to stdout
size_t	ft_strcpy(char *dst, const char *src);		// Copy string
int		ft_printf(const char *str, ...);	// Main function
int		ft_printf_args_c(va_list args, int *count);		// Print char
int		ft_printf_args_i(va_list args, int *count);		// Print int
int		ft_printf_args_p(va_list args, int *count);		// Print pointer
int		ft_printf_args_s(va_list args, int *count);		// Print string
int		ft_printf_args_u(va_list args, int *count);		// Print unsigned int
int		ft_printf_args_x(va_list args, char format, int *count); // Print hex

#endif