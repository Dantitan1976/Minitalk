/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numachar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 19:17:20 by dramirez          #+#    #+#             */
/*   Updated: 2022/11/25 21:51:47 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_numachar(unsigned int numero)
{
	int				longitud;
	char			*cadena;

	longitud = ft_basenum(numero, 10);
	cadena = malloc ((longitud) * sizeof(char) + 1);
	if (!cadena)
		return (NULL);
	cadena[longitud] = '\0';
	longitud = longitud - 1;
	if (numero == 0)
		cadena[0] = '0';
	while (numero > 0)
	{
		cadena[longitud] = (numero % 10) + '0';
		numero = numero / 10;
		longitud--;
	}
	return (cadena);
}
