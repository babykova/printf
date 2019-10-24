/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_type.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 20:08:34 by ehayes            #+#    #+#             */
/*   Updated: 2019/10/24 21:51:06 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft/libft.h"

int is_type(char **input, char *ap);
{
	static t_type   type;
	char            i;
	
	is_flag(str, &type);
	is_width(str, &type);
	is_precision(str, &type);
	is_modif(str, &type);
	if (**str == 'd' || **str == 'i')
	{
	}
	if (**str == 'c')
	{
	}
	if (**str == 'o')
	{
	}
	if (**str == 's')
	{
	}
	if (**str == 'p')
	{
	}
	if (**str == 'x' || **str == 'X')
	{
	}
	if (**str == 'u')
	{
	}
}
