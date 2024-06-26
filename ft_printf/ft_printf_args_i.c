/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_args_i.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:02:17 by hkoev             #+#    #+#             */
/*   Updated: 2023/05/18 20:03:38 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_args_i(va_list args, int *count)
{
	int		i;
	char	*s;

	i = va_arg(args, int);
	s = ft_itoa(i);
	ft_write(s, count);
	free(s);
	return (0);
}
