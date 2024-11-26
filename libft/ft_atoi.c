/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ande-vat <ande-vat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:52:12 by ande-vat          #+#    #+#             */
/*   Updated: 2024/11/04 16:02:17 by ande-vat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isws(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	ft_atoi(char const *src)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (isws(*src))
		src++;
	if (*src == '-')
	{
		sign *= -1;
		src++;
	}
	else if (*src == '+')
		src++;
	while (ft_isdigit(*src))
	{
		res = res * 10 + *src - '0';
		src++;
	}
	return (res * sign);
}
