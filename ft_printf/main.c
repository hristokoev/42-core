/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 20:01:25 by hkoev             #+#    #+#             */
/*   Updated: 2023/05/15 19:47:24 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char	*str;

	str = "Hello World!";
	ft_printf("Character: %c\n", 'A');
	ft_printf("String: %s\n", "Hello World!");
	ft_printf("Pointer: %p\n", str);
	printf("Pointer: %p\n", str);
	ft_printf("Decimal: %d\n", 2147483647);
	ft_printf("Integer: %i\n", 2147483647);
	ft_printf("Unsigned: %u\n", 4294967295);
	ft_printf("Hexadecimal (lowercase): %x\n", 5425424);
	ft_printf("Hexadecimal (uppercase): %X\n", 5425424);
	ft_printf("Percent sign: %%\n");
	return (0);
}
