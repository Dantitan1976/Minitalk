/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:00:57 by dramirez          #+#    #+#             */
/*   Updated: 2022/10/09 12:36:36 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	cont1;
	size_t	cont2;

	cont1 = 0;
	if (*little == '\0' || little == NULL)
		return ((char *)big);
	while (big[cont1] != '\0' && cont1 < len)
	{
		cont2 = 0;
		while (little[cont2] == big[cont1 + cont2] && (cont1 + cont2 < len))
		{
			if (little[cont2 + 1] == '\0')
				return ((char *)big + cont1);
			cont2++;
		}
		cont1++;
	}
	return (NULL);
}
