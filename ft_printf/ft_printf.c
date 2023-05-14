/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 20:01:07 by hkoev             #+#    #+#             */
/*   Updated: 2023/05/14 20:01:09 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void ft_write(char *s)
{
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
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
			if (str[i] == 'c')
			{
				char c = va_arg(args, int);
				write(1, &c, 1);
			}
			else if (str[i] == 's')
			{
				char *s = va_arg(args, char *);
				ft_write(s);
			}
			else if (str[i] == 'd' || str[i] == 'i')
			{
				int d = va_arg(args, int);
				char *s = ft_itoa(d);
				ft_write(s);
			}
			else if (str[i] == 'u')
			{
				unsigned int u = va_arg(args, unsigned int);
				char *s = ft_uint_to_str(u);
				ft_write(s);
			}
			else if (str[i] == 'x')
			{
				unsigned int x = va_arg(args, unsigned int);
				char *s = ft_itox(x, 'l');
				ft_write(s);
			}
			else if (str[i] == 'X')
			{
				unsigned int X = va_arg(args, unsigned int);
				char *s = ft_itox(X, 'u');
				ft_write(s);
			}
			else if (str[i] == 'p')
			{
				void *p = va_arg(args, void *);
				printf("%p", p);
			}
			else if (str[i] == '%')
			{
				write(1, "%%", 2);
			}
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
	va_end(args);
	return 0;
}