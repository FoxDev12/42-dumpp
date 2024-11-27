/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_handlers2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonio <tonio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:30:08 by tonio             #+#    #+#             */
/*   Updated: 2024/11/27 17:35:42 by tonio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex_upper(va_list args)
{
	unsigned long long	u;

	u = (unsigned long long)va_arg(args, unsigned int);
	return (ft_putnbr_base(u, BASE_HEX_UPPER));
}

int	print_ptr(va_list args)
{
	unsigned long long	ptr;

	ptr = (unsigned long long)va_arg(args, void *);
	if (ptr == 0)
		return (ft_putstr("(nil)"));
	return (ft_putstr("0x") + ft_putnbr_base(ptr, BASE_HEX));
}

int	print_percent(va_list args)
{
	(void)args;
	return (ft_putchar('%'));
}
