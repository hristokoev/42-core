/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:59:38 by hkoev             #+#    #+#             */
/*   Updated: 2023/01/15 13:12:31 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *search, const char *find, size_t max)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*find)
		return ((char *)search);
	while (search[i] && i < max)
	{
		j = 0;
		while (find[j] && search[i + j] == find[j] && i + j < max)
		{
			if (!find[j + 1])
				return ((char *)search + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
