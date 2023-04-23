/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 22:08:58 by dramirez          #+#    #+#             */
/*   Updated: 2022/10/02 22:21:29 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	posicion;
	char			*u_coincid;

	u_coincid = NULL;
	posicion = 0;
	while (s[posicion] != '\0')
	{
		if (s[posicion] == (char)c)
			u_coincid = ((char *)s + posicion);
		posicion++;
	}
	if ((char)c == s[posicion])
		return ((char *)s + posicion);
	return (u_coincid);
}
