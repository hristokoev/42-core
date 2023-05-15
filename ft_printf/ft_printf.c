/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 20:01:07 by hkoev             #+#    #+#             */
/*   Updated: 2023/05/15 19:05:59 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void ft_printf_args(va_list args, char c)
{
	if (c == 'c')
		ft_printf_args_c(args);
	else if (c == 's')
		ft_printf_args_s(args);
	else if (c == 'd' || c == 'i')
		ft_printf_args_i(args);
	else if (c == 'u')
		ft_printf_args_u(args);
	else if (c == 'x')
		ft_printf_args_x(args, 'x');
	else if (c == 'X')
		ft_printf_args_x(args, 'X');
	else if (c == 'p')
		ft_printf_args_p(args);
	else if (c == '%')
		write(1, "%%", 2);
}


int ft_printf(const char *str, ...)
{
	int i;
	i = 0;
	va_list args;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			ft_printf_args(args, str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return 0;
}