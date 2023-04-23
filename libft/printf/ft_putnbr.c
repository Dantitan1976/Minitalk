/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 21:11:08 by dramirez          #+#    #+#             */
/*   Updated: 2022/11/20 21:16:13 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int numero)
{
	char	*cadena;
	int		longitud;

	cadena = ft_itoa(numero);
	longitud = ft_putstr(cadena);
	free(cadena);
	return (longitud);
}
