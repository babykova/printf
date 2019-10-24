/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:00:31 by ehayes            #+#    #+#             */
/*   Updated: 2019/10/17 18:10:10 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft/libft.h"

void	is_flag(char **str, t_type *type)
{
	while (**str == '#' || **str == '0' || **str == '-' || **str == '+' || **str == ' ')
	{
		(**str == '+' || type -> plus == 1) ? type->plus = 1 : 0;
		(**str == '-' || type -> minus == 1) ? type->minus = 1 : 0;
		(**str == '0' || type -> zero == 1) ? type->zero = 1 : 0;
		(**str == ' ' || type -> space == 1) ? type->space = 1 : 0;
		(**str == '#' || type -> hash  == 1) ? type->hash = 1 : 0;
		(*str)++;
	}
	if (type -> plus && type -> space)
		type -> space = 0;
	if (type -> minus && type -> zero)
		type -> zero = 0;
}

void	is_width(char **str, t_type *type)
{
	type->width = -1;
	if (**str > '0' && **str <= '9')
	{
		type->width = ft_atoi(**str);
		*str = (*str) + ft_strlen(ft_itoa(type->width);
	}
}

void	is_precision(char **str, t_type *type)
{
	type -> precision = -1;
	if (**str == '.')
		(*str)++;
	if (**str >= '0' && **str <= '9')
	{
		type->precision = ft_atoi(*str);
		*str = (*str) + ft_strlen(ft_itoa(type-precision));
	}
}

void	is_modif(char **str, t_type *type)
{
	while (**str == 'h' || **str == 'l')
	{
		if (**str == 'l' && *(*str + 1) == 'l')
		{
			type -> ll = 1;
			(*str)++;
		}
		if (**str == 'h' && *(*str + 1) == 'h')
		{
			type -> hh = 1;
			(*str)++;
		}
		(**str == 'l' || type -> l  == 1) ? type->l = 1 : 0;
		(**str == 'h' || type -> h == 1) ? type->h = 1 : 0;
	}
	if (type -> ll)
	{
		type->l = 0;
		type->h = 0;
		type->hh = 0;
	}
	if (type -> l)
	{
		type -> h = 0;
		type - > hh = 0;
	}
	if (type -> hh)
		type -> h = 0;
}


}

