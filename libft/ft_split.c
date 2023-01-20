/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:19:30 by hkoev             #+#    #+#             */
/*   Updated: 2023/01/20 21:53:09 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// s = "lorem ipsum dolor sit amet", c = " ";
// str = "lorem", "ipsum", "dolor", "sit", "amet"

#include "libft.h"
#include <stdio.h>

int     ft_words(char const *s, char c)
{
        int     n;
        char    prevc;

        n = 0;
        prevc = c;
        while (*s)
        {
                if (*s != c && prevc == c)
                        n++;
                prevc = *s;                        
                s++;
        }
        return (n);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
        char    **strings;
        int     words;
        int     len;
        int     i;

        words = ft_words(s, c);
        strings = (char **)malloc(words * sizeof(char *));
        i = 0;

        return (strings);
}

int     main()
{
        printf("%d \n", ft_words("lorem ipsum dolor sit amet", ' '));
        return (0);
}
