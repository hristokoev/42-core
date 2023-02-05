/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:59:11 by hkoev             #+#    #+#             */
/*   Updated: 2023/02/05 20:17:58 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t		i;
	char		start;

	if (!str)
		return (NULL);
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
