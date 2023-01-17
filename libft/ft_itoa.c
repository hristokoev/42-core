/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:19:42 by hkoev             #+#    #+#             */
/*   Updated: 2023/01/17 21:13:33 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digits(int n)
{
	int	i;

	i = 1;
	n /= 10;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		size;
	int		neg;
	char	*s;

	if (n == -2147483648)
		return ("-2147483648");
	s = malloc((sizeof(char)) * 12);
	neg = 0;
	if (n < 0)
	{
		s[0] = '-';
		neg = 1;
		n = n * -1;
	}
	i = 0;
	size = ft_digits(n);
	while (i < size)
	{
		s[size - 1 + neg - i] = n % 10 + '0';
		n /= 10;
		i++;
	}
	s[size + neg] = '\0';
	return (s);
}
