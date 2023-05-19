/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_args_x.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:03:22 by hkoev             #+#    #+#             */
/*   Updated: 2023/05/19 16:28:46 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_args_x(va_list args, char format, int *count)
{
	unsigned long int	x;
	char				*s;

	x = va_arg(args, unsigned int);
	if (format == 'x')
		s = ft_itox(x, 'x', ft_hexlen(x));
	else
		s = ft_itox(x, 'X', ft_hexlen(x));
	ft_write(s, count);
	free(s);
	return (0);
}
