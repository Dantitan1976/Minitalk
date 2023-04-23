/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 22:45:01 by dramirez          #+#    #+#             */
/*   Updated: 2022/10/30 11:50:06 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_longnum(int numero)
{
	int	contador;

	contador = 1;
	if (numero < 0)
	{
		numero = numero * -1;
		contador++;
	}
	while (numero >= 10)
	{
		numero = numero / 10;
		contador++;
	}
	return (contador);
}

char	*ft_itoa(int n)
{
	char	*cadena;
	int		longitud;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	longitud = ft_longnum(n);
	cadena = (char *)malloc((sizeof(char)) * (longitud + 1));
	if (!cadena)
		return (NULL);
	cadena[longitud--] = 0;
	if (n < 0)
	{
		cadena[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		cadena[longitud--] = n % 10 + '0';
		n = n / 10;
	}
	return (cadena);
}
