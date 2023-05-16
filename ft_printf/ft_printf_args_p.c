/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_args_p.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 18:54:26 by hkoev             #+#    #+#             */
/*   Updated: 2023/05/16 21:07:27 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_args_p(va_list args, int *count)
{
	void	*p;
	char	*s;

	p = va_arg(args, void *);
	s = ft_uiptox(p);
	ft_write(s, count);
	return (0);
}
