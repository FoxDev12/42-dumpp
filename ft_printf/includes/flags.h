/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonio <tonio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:23:23 by tonio             #+#    #+#             */
/*   Updated: 2024/11/27 17:30:46 by tonio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGS_H
# define FLAGS_H
# include "ft_printf.h"

typedef struct s_flags
{
	char	c;
	int		(*f)(va_list);
}	t_flags;

static const t_flags	g_flags[] = {
{'c', &print_char},
{'s', &print_str},
{'d', &print_int},
{'i', &print_int},
{'u', &print_uint},
{'x', &print_hex},
{'X', &print_hex_upper},
{'p', &print_ptr},
{'%', &print_percent},
{0, 0}
};

#endif