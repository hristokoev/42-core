/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 16:22:37 by hkoev             #+#    #+#             */
/*   Updated: 2023/05/15 19:21:11 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_itox(int n, char format)
{
	int		temp;
	int		slen;
	char	*s;

	slen = ft_hexlen(n);
	s = (char *)malloc(slen + 1);
	if (!s)
		return (NULL);
	s[slen] = '\0';
	while (n != 0)
	{
		temp = n % 16;
		if (temp < 10)
			s[slen - 1] = temp + 48;
		else
		{
			if (format == 'x')
				s[slen - 1] = temp + 87;
			else if (format == 'X')
				s[slen - 1] = temp + 55;
		}
		n /= 16;
		slen--;
	}
	return (s);
}
