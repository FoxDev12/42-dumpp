/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonio <tonio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:21:22 by tonio             #+#    #+#             */
/*   Updated: 2024/11/27 17:36:24 by tonio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "flags.h"

int	ft_print_format(char format, va_list args)
{
	int	i;

	i = 0;
	while (g_flags[i].c)
	{
		if (g_flags[i].c == format)
			return (g_flags[i].f(args));
		i++;
	}
	ft_putchar('%');
	ft_putchar(format);
	return (2);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			len += ft_print_format(format[i], args);
		}
		else
			len += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}
