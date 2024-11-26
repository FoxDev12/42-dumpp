/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonio <tonio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 00:27:40 by tonio             #+#    #+#             */
/*   Updated: 2024/11/26 02:19:07 by tonio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*dup_from(char const *s, size_t index)
{
	char	*ret;
	int		i;

	i = 0;
	ret = ft_calloc(ft_strlen(s) - index, 1);
	if (ret == NULL)
		return (NULL);
	if (ft_strlen(s)- index <= 0 || ret == NULL)
		return (NULL);
	while (index != ft_strlen(s))
	{
		ret[i] = s[index];
		i++;
		index++;
	}
	ret[i] = '\0';
	return (ret);
}

static int	in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	size_t	i;
	char	*realret;

	if (s1 == NULL || ft_strlen(s1) == 0)
		return (ft_calloc(1, 1));
	i = 0;
	while (in_set(s1[i], set) == 1)
		i++;
	ret = dup_from(s1, i);
	if (ret == NULL)
		return (ft_calloc(1, 1));
	i = ft_strlen(ret) - 1;
	if (ft_strlen(ret) == 0)
		return (ft_calloc(1, 1));
	while (in_set(ret[i], set) == 1)
	{
		ret[i] = '\0';
		i--;
	}
	realret = ft_strdup(ret);
	free(ret);
	return (realret);
}
