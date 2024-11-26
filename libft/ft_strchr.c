/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ande-vat <ande-vat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:18:38 by tonio             #+#    #+#             */
/*   Updated: 2024/11/15 14:45:13 by ande-vat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	fflag;

	c = c % 256;
	fflag = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			fflag = 1;
			break ;
		}
		i++;
	}
	if (fflag == 1 || s[i] == c)
		return ((char *)(&s[i]));
	return (NULL);
}
