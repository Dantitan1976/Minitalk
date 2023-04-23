/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:44:19 by dramirez          #+#    #+#             */
/*   Updated: 2022/10/08 09:38:03 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			pos;
	unsigned int	diferencia;

	pos = 0;
	diferencia = 0;
	while ((s1[pos] != '\0') && (s2[pos] != '\0')
		&& (diferencia == 0) && (pos < n))
	{
		diferencia = (unsigned char)s1[pos] - (unsigned char)s2[pos];
		pos++;
	}
	if ((diferencia == 0) && (pos < n))
		diferencia = (unsigned char)s1[pos] - (unsigned char)s2[pos];
	return (diferencia);
}
