/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ande-vat <ande-vat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:44:51 by tonio             #+#    #+#             */
/*   Updated: 2024/11/15 13:51:15 by ande-vat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*mem1;
	const unsigned char	*mem2;

	if (n == 0)
		return (0);
	mem1 = s1;
	mem2 = s2;
	i = 0;
	while (mem1[i] == mem2[i] && i < n - 1)
		i++;
	return (mem1[i] - mem2[i]);
}
