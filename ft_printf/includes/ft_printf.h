/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonio <tonio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:37:33 by tonio             #+#    #+#             */
/*   Updated: 2024/11/27 17:24:21 by tonio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define BASE_DEC "0123456789"
# define BASE_HEX "0123456789abcdef"
# define BASE_HEX_UPPER "0123456789ABCDEF"
# include <stdarg.h>

int		ft_printf(const char *format, ...);

int		print_char(va_list args);
int		print_str(va_list args);
int		print_int(va_list args);
int		print_uint(va_list args);
int		print_hex(va_list args);
int		print_ptr(va_list args);
int		print_hex_upper(va_list args);
int		print_percent(va_list args);

int		ft_putchar(char c);
int		ft_putstr(const char *str);
int		ft_strlen(const char *str);
int		ft_putnbr_base(unsigned long long nbr, char *base);

#endif
