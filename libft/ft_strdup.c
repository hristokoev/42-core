/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:00:44 by hkoev             #+#    #+#             */
/*   Updated: 2023/01/23 14:30:58 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dst;

	dst = (char *)malloc(ft_strlen(str) + 1);
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, str, ft_strlen(str) + 1);
	return (dst);
}
