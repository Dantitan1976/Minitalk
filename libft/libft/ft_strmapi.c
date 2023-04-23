/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 13:19:13 by dramirez          #+#    #+#             */
/*   Updated: 2022/10/23 18:20:05 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	contador;
	char			*cad_result;

	if (!s || !f)
		return (NULL);
	cad_result = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!cad_result)
		return (NULL);
	contador = 0;
	while (contador < (ft_strlen((char *)s)))
	{
		cad_result[contador] = f(contador, s[contador]);
		contador++;
	}
	cad_result[contador] = '\0';
	return (cad_result);
}
