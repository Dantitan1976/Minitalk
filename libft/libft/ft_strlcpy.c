/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stlcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 13:30:26 by dramirez          #+#    #+#             */
/*   Updated: 2022/10/02 16:48:39 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	posicion;

	if (!size)
		return (ft_strlen(src));
	posicion = 0;
	while (src[posicion] && (posicion < size -1))
	{
		dst[posicion] = src[posicion];
		posicion++;
	}
	dst[posicion] = 0;
	return (ft_strlen(src));
}
