/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:08:30 by hkoev             #+#    #+#             */
/*   Updated: 2023/01/19 16:28:00 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ls;

	if (!(ls = (t_list*)malloc(sizeof(*ls))))
		return (NULL);
	ls->content = content;
	ls->next = NULL;
	return (ls);
}