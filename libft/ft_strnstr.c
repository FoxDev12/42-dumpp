/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ande-vat <ande-vat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 00:29:26 by tonio             #+#    #+#             */
/*   Updated: 2024/11/25 14:37:29 by ande-vat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	needle_flag;

	if (!needle[0])
		return ((char *)haystack);
	i = 0;
	j = 0;
	while (haystack[i] && i < len)
	{
		if (haystack[i] != needle[j])
		{
			i -= (j - 1);
			j = 0;
			needle_flag = 0;
		}
		if (haystack[i] == needle[j])
			needle_flag = ++j;
		if (needle_flag != 0 && !needle[j])
			return ((char *)&haystack[i - (j - 1)]);
		i++;
	}
	return (NULL);
}
