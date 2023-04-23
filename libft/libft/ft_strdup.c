/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 20:50:30 by dramirez          #+#    #+#             */
/*   Updated: 2022/10/09 21:23:43 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*duplicado;
	size_t	longitud;

	longitud = ft_strlen(s) + 1;
	duplicado = malloc(sizeof(char) * longitud);
	if (duplicado == NULL)
		return (NULL);
	duplicado = ft_memcpy(duplicado, s, longitud);
	return (duplicado);
}
