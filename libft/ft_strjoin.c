/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:18:57 by hkoev             #+#    #+#             */
/*   Updated: 2023/01/13 19:49:48 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	str = (char *)malloc(i + j + 1);
	ft_memcpy(str, s1, i);
	ft_memcpy(str + i, s2, j);
	*(str + i + j) = '\0';
	return ((char *)str);
}
