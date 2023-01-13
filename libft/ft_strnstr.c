/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:59:38 by hkoev             #+#    #+#             */
/*   Updated: 2023/01/11 22:04:22 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *search, const char *find, size_t max)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*find || find == NULL)
		return ((char *)search);
	while (search[i] != '\0' && i < max)
	{
		j = 0;
		while (find[j] != '\0' && search[i + j] == find[j] && i + j < max)
		{
			if (find[j + 1] == '\0')
				return ((char *)search + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
