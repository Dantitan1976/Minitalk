/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 00:54:08 by dramirez          #+#    #+#             */
/*   Updated: 2022/10/01 00:55:22 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	longitud;
	char	*destino;
	char	*origen;

	longitud = 0;
	destino = (char *)dest;
	origen = (char *)src;
	if (!src && !dest)
		return (0);
	if (dest < src)
	{
		while (longitud < n)
		{
			destino[longitud] = origen[longitud];
			longitud++;
		}
	}
	else
	{
		while (n--)
		{
			destino[n] = origen[n];
		}
	}
	return (dest);
}
