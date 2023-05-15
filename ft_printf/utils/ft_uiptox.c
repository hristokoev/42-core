/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uiptox.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 19:11:50 by hkoev             #+#    #+#             */
/*   Updated: 2023/05/15 19:36:29 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_uiptox(void *ptr)
{
	int			slen;
	char		*s;
	uintptr_t	n;
	uintptr_t	temp;

	n = (uintptr_t) ptr;
	slen = ft_hexlen(n);
	s = (char *)malloc(slen + 3);
	if (!s)
		return (NULL);
	s[0] = '0';
	s[1] = 'x';
	slen += 2;
	s[slen] = '\0';
	while (n != 0)
	{
		temp = n % 16;
		if (temp < 10)
			s[slen - 1] = temp + 48;
		else
			s[slen - 1] = temp + 87;
		n /= 16;
		slen--;
	}
	return (s);
}
