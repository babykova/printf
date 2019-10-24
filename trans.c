/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trans.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 20:48:25 by ehayes            #+#    #+#             */
/*   Updated: 2019/10/24 21:51:21 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "printf.h"
#include "libft/libft.h"

void	trans_d(va_list *ap, t_type *type)
{
	if (type->hh)
	{
		ptint_d((char)va_arg(*ap, int), type);
		return ;
	}
	if (type->h)
	{
		print_d((
	}
	if (type->l)
	{
	}
	if (type->ll)
	{
	}
}


void    trans_u(va_list *ap, t_type *type)
{
	if(type->hh)
	if(type->h)
	if(type->l)
	if(type->ll)
}


void    trans_o(va_list *ap, t_type *type)
{
	if(type->hh)
	if(type->h)
	if(type->l)
	if(type->ll)
}


void    trans_x(va_list *ap, t_type *type)
{
	if(type->hh)
	if(type->h)
	if(type->l)
	if(type->ll)
}






