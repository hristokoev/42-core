/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:19:30 by hkoev             #+#    #+#             */
/*   Updated: 2023/02/16 16:57:41 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_words(char const *s, char c)
{
	size_t	n;
	char	prev;

	n = 0;
	prev = c;
	while (*s)
	{
		if (*s != c && prev == c)
			n++;
		prev = *s;
		s++;
	}
	return (n);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		len;
	int		i;

	i = 0;
	strings = (char **)malloc((ft_words(s, c) + 1) * sizeof(char *));
	if (!strings)
		return (NULL);
	while (*s != '\0')
	{
		len = 0;
		while (*s != '\0' && *s == c)
			s++;
		while (*s != '\0' && *s != c)
		{
			s++;
			len++;
		}
		if (len)
			strings[i++] = ft_substr(s - len, 0, len);
	}
	strings[i] = NULL;
	return (strings);
}

int	main()
{
	char	s[] = "lorem ipsum dolor sit amet";
	char	del = ' ';
	ft_split(s, del);
	return (0);
}
