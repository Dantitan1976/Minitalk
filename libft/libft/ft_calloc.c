/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:17:53 by dramirez          #+#    #+#             */
/*   Updated: 2022/10/09 20:25:42 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*resultado;

	resultado = malloc (nmemb * size);
	if (!resultado)
		return (NULL);
	ft_bzero(resultado, (nmemb * size));
	return (resultado);
}
