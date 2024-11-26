/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonio <tonio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 00:26:56 by tonio             #+#    #+#             */
/*   Updated: 2024/11/26 02:00:37 by tonio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	min(size_t a, size_t b)
{
	if (b < a)
		return (b);
	return (a);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ret;

	j = 0;
	i = start;
	if (len == 0 || ft_strlen(s) == 0 || start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	ret = malloc(min(len, (ft_strlen(s) - start)) + 1);
	if (!ret)
		return (NULL);
	if (i >= ft_strlen(s))
		return (ft_calloc(1, 1));
	while (s[i] && j < len)
	{
		ret[j] = s[i];
		j++;
		i++;
	}
	ret[j] = '\0';
	return (ret);
}
