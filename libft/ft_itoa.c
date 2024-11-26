/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ande-vat <ande-vat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 04:47:03 by tonio             #+#    #+#             */
/*   Updated: 2024/11/25 14:33:46 by ande-vat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	get_size_and_sign(int *n, int *sign)
{
	int	i;
	int	nb;

	i = 0;
	if (*n < 0)
	{
		*sign = -1;
		*n = -(*n);
		i++;
	}
	nb = *n;
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		sign;

	sign = 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = get_size_and_sign(&n, &sign);
	if (i == 0)
		return (ft_strdup("0"));
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	while (i >= 0)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	if (sign == -1)
	{
		str[0] = '-';
	}
	return (str);
}
