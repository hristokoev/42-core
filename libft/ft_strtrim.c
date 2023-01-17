/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:19:08 by hkoev             #+#    #+#             */
/*   Updated: 2023/01/17 18:13:45 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	char	*s;
	int		start;
	int		end;

	start = 0;
	end = ft_strlen(str) - 1;
	if (!str | !set)
		return (NULL);
	while (ft_strchr(set, str[start]))
		start++;
	while (ft_strchr(set, str[end]))
		end--;
	s = malloc(sizeof(char) * end - start + 2);
	if (!s)
		return (NULL);
	ft_strlcpy(s, &str[start], end - start + 2);
	return (s);
}
