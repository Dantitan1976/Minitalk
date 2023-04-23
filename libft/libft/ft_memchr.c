/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:20:40 by dramirez          #+#    #+#             */
/*   Updated: 2022/10/08 10:46:19 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cadena;
	size_t			contador;

	cadena = (unsigned char *)s;
	contador = 0;
	while (contador < n)
	{
		if (cadena[contador] == (unsigned char)c)
			return ((void *)&cadena[contador]);
		contador++;
	}
	return (NULL);
}
