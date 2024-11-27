/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonio <tonio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:11:20 by tonio             #+#    #+#             */
/*   Updated: 2024/11/27 17:37:08 by tonio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
	return (i);
}

int	ft_putnbr_base(unsigned long long nbr, char *base)
{
	int	len;

	len = 0;
	if (nbr >= (unsigned long long)ft_strlen(base))
		len += ft_putnbr_base(nbr / ft_strlen(base), base);
	len += ft_putchar(base[nbr % ft_strlen(base)]);
	return (len);
}
