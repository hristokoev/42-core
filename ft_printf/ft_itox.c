/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 16:22:37 by hkoev             #+#    #+#             */
/*   Updated: 2023/05/14 19:07:01 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char    *ft_itox(int n, char format)
{
        int     temp;
        int     slen;
        char    *s;

        slen = 0;
        temp = n;
        while (temp != 0)
        {
                slen++;
                temp /= 16;
        }
        s = (char *)malloc(slen + 1);
        if (!s)
                return (NULL);
        s[slen] = '\0';
        while (n != 0)
        {
                temp = n % 16;
                if (temp < 10)
                        s[slen - 1] = temp + 48;
                else
                {
                        if (format == 'l')
                                s[slen - 1] = temp + 87;
                        else if (format == 'u')
                                s[slen - 1] = temp + 55;
                }
                n /= 16;
                slen--;
        }
        return s;
}