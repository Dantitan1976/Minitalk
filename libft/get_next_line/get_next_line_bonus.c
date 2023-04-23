/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:08:56 by dramirez          #+#    #+#             */
/*   Updated: 2022/12/11 09:38:00 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "get_next_line_bonus.h"

char	*ft_leerfile(int fd, char *v_estatica)
{
	char	*temporal;
	int		num;
	char	*temporal2;

	temporal = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!temporal)
		return (free(v_estatica), NULL);
	num = 1;
	while (num && !ft_strchr(v_estatica, '\n'))
	{
		num = read(fd, temporal, BUFFER_SIZE);
		if (num == -1 || (num == 0 && !v_estatica[0]))
			return (free(temporal), free(v_estatica), NULL);
		temporal[num] = 0;
		if (num == 0 && v_estatica[0])
			return (free(temporal), v_estatica);
		temporal2 = v_estatica;
		v_estatica = ft_strjoin(v_estatica, temporal);
		free (temporal2);
	}
	free(temporal);
	return (v_estatica);
}

char	*copiar_linea(char *v_estatica)
{
	int	contador;

	if (!ft_strchr(v_estatica, '\n'))
		return (ft_strdup(v_estatica));
	contador = 0;
	while (v_estatica[contador] && v_estatica[contador] != '\n')
		contador++;
	return (ft_substr(v_estatica, 0, contador + 1));
}

char	*lib_estatica(char *v_estatica)
{
	char	*nueva_cad;

	if (!ft_strchr(v_estatica, '\n'))
		return (free(v_estatica), NULL);
	nueva_cad = ft_strdup(ft_strchr(v_estatica, '\n') + 1);
	free(v_estatica);
	return (nueva_cad);
}

char	*get_next_line(int fd)
{
	static char	*v_estatica[FD_MAX + 1];
	char		*linea;

	if (BUFFER_SIZE < 1 || fd < 0 || fd > FD_MAX)
		return (NULL);
	if (!v_estatica[fd])
		v_estatica[fd] = ft_strdup("");
	if (!v_estatica[fd])
		return (NULL);
	if (!ft_strchr(v_estatica[fd], '\n'))
		v_estatica[fd] = ft_leerfile(fd, v_estatica[fd]);
	if (!v_estatica[fd])
		return (NULL);
	linea = copiar_linea(v_estatica[fd]);
	v_estatica[fd] = lib_estatica(v_estatica[fd]);
	return (linea);
}
