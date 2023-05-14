/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 20:01:25 by hkoev             #+#    #+#             */
/*   Updated: 2023/05/14 20:04:01 by hkoev            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
	ft_printf("Character: %c\n", 'A');
	ft_printf("String: %s\n", "Hello World!");
	ft_printf("Pointer: %p\n", &ft_printf);
	ft_printf("Decimal: %d\n", 123);
	ft_printf("Integer: %i\n", 123);
	ft_printf("Unsigned: %u\n", 123);
	ft_printf("Hexadecimal (lowercase): %x\n", 123);
	ft_printf("Hexadecimal (uppercase): %X\n", 123);
	ft_printf("Percent sign: %%\n");
	return 0;
}
