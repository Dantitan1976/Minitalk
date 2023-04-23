/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpuntero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 11:52:13 by dramirez          #+#    #+#             */
/*   Updated: 2022/11/27 17:08:09 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpuntero(unsigned long puntero)
{
	int	longitud;

	if (puntero == 0)
		return (ft_putstr("0x0"));
	if (!puntero)
		return (ft_putstr("(null)"));
	longitud = ft_putstr("0x");
	longitud += ft_hexad(puntero, 'x');
	return (longitud);
}
