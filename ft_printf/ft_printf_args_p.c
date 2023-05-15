/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_args_p.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 18:54:26 by hkoev             #+#    #+#             */
/*   Updated: 2023/05/15 19:30:16 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf_args_p(va_list args)
{
	void *p = va_arg(args, void *);
	char *s = ft_uintptr_to_hex(p);
	ft_write(s);
    return (0);
}