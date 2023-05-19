/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_args_s.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:01:23 by hkoev             #+#    #+#             */
/*   Updated: 2023/05/18 20:24:09 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_args_s(va_list args, int *count)
{
	char	*s;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(null)";
	ft_write(s, count);
	return (0);
}
