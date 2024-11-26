/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonio <tonio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:39:56 by ande-vat          #+#    #+#             */
/*   Updated: 2024/11/26 02:15:28 by tonio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*strdup_pos(char const *str, int start, int end)
{
	char	*ret;
	int		i;

	i = 0;
	if (end - start <= 0)
		return (NULL);
	ret = malloc(end - start + 1);
	while (start != end)
	{
		ret[i] = str[start];
		i++;
		start++;
	}
	ret[i] = '\0';
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	int		start;
	int		end;
	char	**tab;
	int		i;
	int		j;

	tab = ft_calloc(ft_strlen(s) + 1, sizeof(char *));
	if (tab == NULL)
		return (NULL);
	j = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		end = i;
		tab[j] = strdup_pos(s, start, end);
		j++;
	}
	tab[j] = NULL;
	return (tab);
}
