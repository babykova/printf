/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehayes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 14:41:56 by ehayes            #+#    #+#             */
/*   Updated: 2019/10/17 18:10:12 by ehayes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef printf_h
# define printf_h

#include <string.h>
#include <stdint.h>
#include <stdarg.h>

typedef struct s_type
{
	unsigned int	plus;
	unsigned int	minus;
	unsigned int	zero;
	unsigned int	space;
	unsigned int	hash;
	int				width;
	int				precision;
	unsigned int	l;
	unsigned int	ll;
	unsigned int	h;
	unsigned int	hh;
}				t_type;


}
