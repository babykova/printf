/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 14:25:01 by ehayes            #+#    #+#             */
/*   Updated: 2019/10/24 21:46:54 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft/libft.h"

int ft_printf(const char *form, ...)
{
	va_list ap;
	char    *input;
	
	input = ft_strdup(form);
	va_start(ap, form);
	while (*input)
	{
		if(*input == '%')
		{
			input++;
			is_type(&input, &ap);
			continue;
		}
		if (*input)
		{
			ft_putchar(*input);
			input++;
			len++;
		}
	}
	va_end(ap);
	return(len);
}
