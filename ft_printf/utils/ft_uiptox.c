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

static void	ft_convert_uiptox(uintptr_t n, char *s)
{
	int	len;

	len = ft_hexlen(n);
	s[len + 2] = '\0';
	while (n != 0)
	{
		s[len + 1] = "0123456789abcdef"[n % 16];
		n /= 16;
		len--;
	}
}

char	*ft_uiptox(void *ptr)
{
	uintptr_t	n;
	char		*s;

	n = (uintptr_t)ptr;
	s = (char *)malloc(sizeof(char) * (ft_hexlen(n) + 3));
	if (!s)
		return (NULL);
	s[0] = '0';
	s[1] = 'x';
	ft_convert_uiptox(n, s);
	return (s);
}
