/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:19:42 by hkoev             #+#    #+#             */
/*   Updated: 2023/05/15 19:33:39 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_uintlen(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_uitoa(unsigned int n)
{
	char	*s;
	int		len;

	if (n == 0)
	{
		s = malloc(2);
		if (s)
		{
			s[0] = '0';
			s[1] = '\0';
		}
		return (s);
	}	
	len = ft_uintlen(n);
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[len] = '\0';
	while (n != 0)
	{
		len--;
		s[len] = (n % 10) + '0';
		n /= 10;
	}	
	return (s);
}
