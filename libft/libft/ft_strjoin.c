/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:02:30 by dramirez          #+#    #+#             */
/*   Updated: 2022/10/12 17:40:13 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cadena3;
	size_t	cont_cadsrc;
	size_t	cont_cad3;
	size_t	tam_cad3;

	tam_cad3 = ft_strlen(s1) + ft_strlen(s2) + 1;
	cadena3 = (char *) malloc(tam_cad3 * sizeof(char));
	if (!cadena3)
		return (NULL);
	cont_cadsrc = 0;
	cont_cad3 = 0;
	while (s1[cont_cadsrc])
		cadena3[cont_cad3++] = s1[cont_cadsrc++];
	cont_cadsrc = 0;
	while (s2[cont_cadsrc])
		cadena3[cont_cad3++] = s2[cont_cadsrc++];
	cadena3[cont_cad3] = '\0';
	return (cadena3);
}
