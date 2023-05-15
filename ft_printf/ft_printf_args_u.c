/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_args_u.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:02:56 by hkoev             #+#    #+#             */
/*   Updated: 2023/05/15 19:13:58 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf_args_u(va_list args)
{
    unsigned int i = va_arg(args, unsigned int);
    char *s = ft_uint_to_str(i);
    ft_write(s);
    return (0);
}