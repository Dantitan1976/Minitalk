/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 19:13:53 by dramirez          #+#    #+#             */
/*   Updated: 2022/11/27 17:03:27 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conversiones(va_list argum, const char *cadena, int contador)
{
	if (cadena[contador] == 'c')
		return (ft_putchar(va_arg(argum, int)));
	else if (cadena[contador] == 's')
		return (ft_putstr(va_arg(argum, char *)));
	else if (cadena[contador] == 'p')
		return (ft_putpuntero(va_arg(argum, unsigned long long)));
	else if (cadena[contador] == 'd' || cadena[contador] == 'i')
		return (ft_putnbr(va_arg(argum, int)));
	else if (cadena[contador] == 'u')
		return (ft_unsigned(va_arg(argum, unsigned int)));
	else if (cadena[contador] == 'x' || cadena[contador] == 'X')
		return (ft_hexad(va_arg(argum, unsigned int), cadena[contador]));
	else
		return (ft_putchar('%'));
}

int	ft_printf(const char *str, ...)
{
	int		contador;
	int		resultado;
	va_list	args;

	contador = 0;
	resultado = 0;
	va_start(args, str);
	while (str[contador])
	{
		if (str[contador] == '%')
		{
			contador++;
			resultado += ft_conversiones(args, str, contador);
		}
		else
			resultado += ft_putchar(str[contador]);
		contador++;
	}
	va_end(args);
	return (resultado);
}
