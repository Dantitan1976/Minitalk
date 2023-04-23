/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 08:29:00 by dramirez          #+#    #+#             */
/*   Updated: 2022/10/16 15:43:50 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_contpalab(char *s, char c)
{
	size_t	numpalab;
	size_t	pos;

	if (!s || !ft_strlen(s))
		return (0);
	pos = 0;
	numpalab = s[pos] != c;
	while (s[pos])
	{
		numpalab += (s[pos] == c && s[pos + 1] != c && s[pos + 1] != '\0');
		pos++;
	}
	return (numpalab);
}

int	ft_longpalab(char const *cadena, int posicion, char separador)
{
	int	contador;

	contador = 0;
	while (cadena[posicion])
	{
		if (cadena[posicion] == separador || cadena[posicion] == '\0')
			return (contador);
		posicion++;
		contador++;
	}
	return (contador);
}

char	**ft_split(char const *s, char c)
{
	char	**tabla;
	size_t	pos1;
	size_t	filas;
	size_t	total_long;

	tabla = ft_calloc(ft_contpalab((char *)s, c) + 1, sizeof(char *));
	if (!tabla || !s)
		return (NULL);
	filas = 0;
	pos1 = 0;
	while (filas < ft_contpalab((char *)s, c))
	{
		while (s[pos1] == c)
			pos1++;
		total_long = ft_longpalab(s, pos1, c);
		tabla[filas] = ft_substr(s, pos1, total_long);
		pos1 += total_long;
		filas++;
		pos1++;
	}
	return (tabla);
}
