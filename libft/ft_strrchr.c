/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ande-vat <ande-vat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 00:28:39 by tonio             #+#    #+#             */
/*   Updated: 2024/11/15 14:45:49 by ande-vat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	fflag;

	fflag = 0;
	c = c % 256;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
		{
			fflag = 1;
			break ;
		}
		i--;
	}
	if (fflag == 1 || s[i] == c)
		return ((char *)(&s[i]));
	return (NULL);
}
