/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonio <tonio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:55:00 by ande-vat          #+#    #+#             */
/*   Updated: 2024/11/26 02:24:11 by tonio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	s;
	void	*ret;

	s = nmemb * size;
	if (nmemb <= 0 || size <= 0)
		return (malloc(0));
	if (s / size != nmemb || s <= 0)
		return (NULL);
	if (s > 0)
	{
		ret = malloc(s);
	}
	if (!ret)
		return (NULL);
	ft_bzero(ret, s);
	return (ret);
}
