/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:27:25 by dramirez          #+#    #+#             */
/*   Updated: 2022/10/23 17:51:18 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	tam_cad;
	size_t	tam_subcad;
	char	*subcad;

	if (!s)
		return (NULL);
	tam_cad = ft_strlen(s);
	if (start > tam_cad)
		return (ft_strdup(""));
	if (start + len > tam_cad)
		len = tam_cad - start;
	tam_subcad = len + 1;
	subcad = (char *) malloc(tam_subcad * sizeof(char));
	if (!subcad)
		return (NULL);
	ft_memcpy(subcad, s + start, len);
	subcad[len] = '\0';
	return (subcad);
}
