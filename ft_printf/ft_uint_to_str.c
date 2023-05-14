/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uint_to_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:19:42 by hkoev             #+#    #+#             */
/*   Updated: 2023/05/14 16:08:36 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char *ft_uint_to_str(unsigned int n)
{
	char *buf = (char *)malloc(21);
	char *p = buf + 20;

	if (n == 0)
	{
		*--p = '0';
	}
	else
	{
		while (n != 0)
		{
			*--p = '0' + (n % 10);
			n /= 10;
		}
	}
	char *result = (char *)malloc(buf + 21 - p);
	ft_strcpy(result, p);
	free(buf);
	return result;
}