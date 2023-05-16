/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 20:01:07 by hkoev             #+#    #+#             */
/*   Updated: 2023/05/16 21:16:24 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printf_args(va_list args, char c, int *count)
{
	if (c == 'c')
		ft_printf_args_c(args, count);
	else if (c == 's')
		ft_printf_args_s(args, count);
	else if (c == 'd' || c == 'i')
		ft_printf_args_i(args, count);
	else if (c == 'u')
		ft_printf_args_u(args, count);
	else if (c == 'x')
		ft_printf_args_x(args, 'x', count);
	else if (c == 'X')
		ft_printf_args_x(args, 'X', count);
	else if (c == 'p')
		ft_printf_args_p(args, count);
	else if (c == '%')
	{
		count++;
		write(1, "%%", 2);
	}
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	count = 0;
	va_start(args, str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			ft_printf_args(args, str[i], &count);
		}
		else
		{
			write(1, &str[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
