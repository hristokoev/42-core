/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_args_x.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:03:22 by hkoev             #+#    #+#             */
/*   Updated: 2023/05/16 21:08:21 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_args_x(va_list args, char format, int *count)
{
	unsigned int	x;
	char			*s;

	x = va_arg(args, unsigned int);
	if (format == 'x')
		s = ft_itox(x, 'x');
	else
		s = ft_itox(x, 'X');
	ft_write(s, count);
	return (0);
}
