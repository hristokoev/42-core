/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:47:37 by hkoev             #+#    #+#             */
/*   Updated: 2023/01/15 15:23:07 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*ps;

	ps = s;
	if (c >= 256)
		c = c % 256;
	while (n--)
	{
		if (*ps == c)
			return ((void *)ps);
		ps++;
	}
	return (NULL);
}
