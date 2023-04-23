/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 22:01:25 by dramirez          #+#    #+#             */
/*   Updated: 2022/11/06 19:22:29 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*objetivo;
	unsigned char	origen;
	size_t			caract;

	objetivo = str;
	origen = c;
	caract = 0;
	while (caract++ < n)
		*objetivo++ = origen;
	return (str);
}
