/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:59:11 by hkoev             #+#    #+#             */
/*   Updated: 2023/02/03 20:28:01 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	start;
	size_t		i;

	start = str[0];
	i = ft_strlen(str);
	str = (str + i);
	if (c >= 256)
		c = c % 256;
	while (*str != start && c != *str)
		str--;
	if (c == *str)
		return ((char *)str);
	return (0);
}
