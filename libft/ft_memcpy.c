/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:58:27 by hkoev             #+#    #+#             */
/*   Updated: 2023/01/23 14:12:24 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*pdst;

	if (!dst && !src)
		return (NULL);
	pdst = dst;
	while (n--)
		*((char *)dst++) = *((char *)src++);
	return (pdst);
}
