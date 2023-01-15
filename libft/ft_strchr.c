/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:59:06 by hkoev             #+#    #+#             */
/*   Updated: 2023/01/15 14:54:39 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if (c >= 256)
		c = c % 256;
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	if (*str != c)
		return (NULL);
	return ((char *)str);
}
