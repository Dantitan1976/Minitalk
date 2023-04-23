/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:10:34 by dramirez          #+#    #+#             */
/*   Updated: 2022/12/11 10:52:59 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

/*size_t	ft_strlen_gnl(const char *cadena)
{
	size_t	contador;

	contador = 0;
	while (cadena[contador])
		contador++;
	return (contador);
}*/

char	*ft_strchr(const char *cadena, int caract)
{
	while (*cadena != (char)caract)
	{
		if (!*cadena)
			return (NULL);
		cadena++;
	}
	return ((char *)cadena);
}

char	*ft_strdup(const char *src)
{
	char	*nueva;
	int		longitud;

	nueva = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!nueva)
		return (NULL);
	longitud = 0;
	while (src[longitud])
	{
		nueva[longitud] = src[longitud];
		longitud++;
	}
	nueva[longitud] = 0;
	return (nueva);
}

char	*ft_substr(const char *str, unsigned int inicio, size_t longitud)
{
	char	*nueva;
	size_t	cad_long;
	size_t	contador;

	cad_long = ft_strlen(str);
	if (inicio >= cad_long)
		return (ft_strdup(""));
	if (longitud > cad_long - inicio)
		longitud = cad_long - inicio;
	nueva = (char *)malloc(sizeof(char) * (longitud + 1));
	if (!nueva)
		return (NULL);
	contador = 0;
	while (str[inicio + contador] && contador < longitud)
	{
		nueva[contador] = str[inicio + contador];
		contador++;
	}
	nueva[contador] = 0;
	return (nueva);
}

char	*ft_strjoin(const char *str1, const char *str2)
{
	char	*nueva;
	size_t	long_nueva;
	size_t	cont_str1;
	size_t	cont_str2;

	if (!str1 || !str2)
		return (NULL);
	long_nueva = ft_strlen(str1) + ft_strlen(str2);
	nueva = (char *)malloc(sizeof(char) * (long_nueva + 1));
	if (!nueva)
		return (NULL);
	cont_str1 = 0;
	while (str1[cont_str1])
	{
		nueva[cont_str1] = str1[cont_str1];
		cont_str1++;
	}
	cont_str2 = 0;
	while (str2[cont_str2])
	{
		nueva[cont_str1 + cont_str2] = str2[cont_str2];
		cont_str2++;
	}
	nueva[cont_str1 + cont_str2] = 0;
	return (nueva);
}
