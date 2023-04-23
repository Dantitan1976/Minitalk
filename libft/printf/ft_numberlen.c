/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numberlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:15:27 by dramirez          #+#    #+#             */
/*   Updated: 2022/11/23 23:19:25 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_numberlen(long int numero)
{
	int	posicion;

	posicion = 0;
	if (numero == 0)
		posicion = 1;
	if (numero < 0)
	{
		numero = -numero;
		posicion++;
	}
	while (numero > 0)
	{
		numero = numero / 10;
		posicion++;
	}
	return (posicion);
}
