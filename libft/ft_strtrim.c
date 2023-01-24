/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:19:08 by hkoev             #+#    #+#             */
/*   Updated: 2023/01/24 19:34:15 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	char	*s;
	int		strlen;
	int		setlen;
	int		start;
	int		end;

	strlen = ft_strlen(str);
	setlen = ft_strlen(set);
	start = 0;
	end = ft_strlen(str);
	if (!str || !set)
		return (NULL);
	while (ft_strchr(set, str[start]) && strlen && setlen)
		start++;
	while (ft_strchr(set, str[end]) && strlen && setlen)
		end--;
	if (start > end)
		return ((char *)ft_calloc(1, sizeof(char)));
	s = (char *)ft_calloc(end - start + 2, sizeof(char));
	if (!s)
		return (NULL);
	ft_strlcpy(s, &str[start], end - start + 2);
	return (s);
}
