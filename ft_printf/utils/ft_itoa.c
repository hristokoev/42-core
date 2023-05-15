/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:19:42 by hkoev             #+#    #+#             */
/*   Updated: 2023/05/15 19:21:11 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

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

char	*ft_allocator(long int *ln, int size, int neg)
{
	char	*s;

	s = malloc((sizeof(char)) * size + neg + 1);
	if (!s)
		return (NULL);
	if (*ln < 0)
	{
		*ln = *ln * -1;
		s[0] = '-';
	}
	return (s);
}

char	*ft_itoa(int n)
{
	int			i;
	int			size;
	int			neg;
	long int	ln;
	char		*s;

	ln = n;
	i = 0;
	size = ft_digits(ln);
	neg = 0;
	if (ln < 0)
		neg = 1;
	s = ft_allocator(&ln, size, neg);
	if (!s)
		return (NULL);
	while (i < size)
	{
		s[size - 1 - i + neg] = ln % 10 + '0';
		ln /= 10;
		i++;
	}
	s[size + neg] = '\0';
	return (s);
}
