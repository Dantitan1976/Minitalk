/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 10:26:47 by dramirez          #+#    #+#             */
/*   Updated: 2022/10/09 10:37:05 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cad1;
	unsigned char	*cad2;

	cad1 = (unsigned char *)s1;
	cad2 = (unsigned char *)s2;
	while (n && *cad1 == *cad2)
	{
		cad1++;
		cad2++;
		n--;
	}
	if (n)
		return (*cad1 - *cad2);
	else
		return (0);
}
