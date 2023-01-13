/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:18:39 by hkoev             #+#    #+#             */
/*   Updated: 2023/01/13 20:17:48 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	str = (char *)malloc(len * sizeof(char) + 1);
	ft_memcpy(str, s + start, len);
	*(str + len) = '\0';
	return ((char *)str);
}
