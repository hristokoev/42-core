/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:59:11 by hkoev             #+#    #+#             */
/*   Updated: 2023/01/15 14:12:55 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*pstart;
	size_t		i;

	pstart = str;
	i = ft_strlen(str);
	str = (str + i);
	if (c >= 256)
		c = c % 256;
	while (*str != *pstart && c != *str)
		str--;
	if (c == *str)
		return ((char *)str);
	return (0);
}
