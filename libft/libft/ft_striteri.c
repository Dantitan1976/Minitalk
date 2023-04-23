/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 17:35:38 by dramirez          #+#    #+#             */
/*   Updated: 2022/10/30 18:20:40 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	posicion;

	posicion = 0;
	if (!s || !f)
		return ;
	if (s[posicion])
	{
		while (posicion < (ft_strlen((char *)s)))
		{
			f(posicion, s + posicion);
			posicion++;
		}
	}
	return ;
}
