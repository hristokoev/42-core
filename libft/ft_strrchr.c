/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:59:11 by hkoev             #+#    #+#             */
/*   Updated: 2023/02/06 18:51:00 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*pstr;
	char		*last;
	int			i;

	if (!str)
		return (NULL);
	pstr = str;
	last = NULL;
	i = 0;
	while (pstr[i])
	{
		if (pstr[i] == (char)c)
			last = (char *)&pstr[i];
		i++;
	}
	if ((char)c == pstr[i])
		last = (char *)&pstr[i];
	return (last);
}
