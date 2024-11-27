/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_handlers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonio <tonio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:30:08 by tonio             #+#    #+#             */
/*   Updated: 2024/11/27 16:20:28 by tonio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_char(va_list args)
{
    char    c;

    c = va_arg(args, int);
    return (ft_putchar(c));
}

int print_str(va_list args)
{
    char*    s;

    s = va_arg(args, char *);
    if (!s)
        return (ft_putstr("(null)"));
    return (ft_putstr(s));
}

int print_int(va_list args)
{
    long long             i;
    unsigned long long    u;
    int             len;

    i = (long long)va_arg(args, int);
    u = i;
    len = 0;
    if (i < 0)
    {
        len = 1;        
        ft_putchar('-');
        u = i * -1;
    }
    return (ft_putnbr_base(u, BASE_DEC) + len);
}

int print_uint(va_list args)
{
    unsigned long long    u;

    u = (unsigned long long)va_arg(args, unsigned int);
    return (ft_putnbr_base(u, BASE_DEC));
}

int print_hex(va_list args)
{
    unsigned long long  u;

    u = (unsigned long long)va_arg(args, unsigned int);
    return (ft_putnbr_base(u, BASE_HEX));
}

int print_hex_upper(va_list args)
{
    unsigned long long  u;

    u = (unsigned long long)va_arg(args, unsigned int);
    return (ft_putnbr_base(u, BASE_HEX_UPPER));
}

int print_ptr(va_list args)
{
    unsigned long long ptr;

    ptr = (unsigned long long)va_arg(args, void *);
    if (ptr == 0)
        return (ft_putstr("(nil)"));
    return (ft_putstr("0x") + ft_putnbr_base(ptr, BASE_HEX));
}

int print_percent(va_list args)
{
    (void)args;
    return (ft_putchar('%'));
}