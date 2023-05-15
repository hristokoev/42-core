/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uintptr_to_hex.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 19:11:50 by hkoev             #+#    #+#             */
/*   Updated: 2023/05/15 19:21:09 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char *ft_uintptr_to_hex(void *ptr)
{
        uintptr_t        n;
        n = (uintptr_t) ptr;
        char *s;
        int slen;
        uintptr_t temp;

        slen = ft_hexlen(n);
        s = (char *)malloc(slen + 3);
        if (!s)
                return (NULL);
        s[0] = '0';
        s[1] = 'x';
        slen += 2;
        s[slen] = '\0';
        while (n != 0)
        {
                temp = n % 16;
                if (temp < 10)
                        s[slen - 1] = temp + 48;
                else
                        s[slen - 1] = temp + 87;
                n /= 16;
                slen--;
        }
        return s;
}