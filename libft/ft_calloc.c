/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:00:40 by hkoev             #+#    #+#             */
/*   Updated: 2023/01/23 14:46:12 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t n)
{
	void	*i;
	size_t	size_max;

	size_max = (size_t)-1;
	if (n && size_max / n < count)
		return (NULL);
	i = malloc(count * n);
	if (!i)
		return (NULL);
	ft_memset(i, 0, count * n);
	return (i);
}
