/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 23:24:05 by dramirez          #+#    #+#             */
/*   Updated: 2022/10/01 00:52:39 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned const char	*origen;
	unsigned char		*destino;
	size_t				contador;

	origen = (unsigned char *)src;
	destino = (unsigned char *)dest;
	contador = 0;
	while (dest == src || !n)
	{
		return (dest);
	}
	while (n > contador)
	{
		destino[contador] = origen[contador];
		contador++;
	}
	return (dest);
}
