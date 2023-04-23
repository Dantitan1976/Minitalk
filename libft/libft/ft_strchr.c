/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 20:50:30 by dramirez          #+#    #+#             */
/*   Updated: 2022/10/02 21:56:08 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	posicion;

	posicion = 0;
	while (s[posicion] != '\0')
	{
		if (s[posicion] == (char)c)
			return ((char *)s + posicion);
		posicion++;
	}
	if ((char)c == s[posicion])
		return ((char *)s + posicion);
	return (NULL);
}
