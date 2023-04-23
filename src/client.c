/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 21:16:20 by dramirez          #+#    #+#             */
/*   Updated: 2023/04/14 21:16:20 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

void	ft_char_signal(char char_env, int pid)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((char_env & (1 << bit)) == 0)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		bit++;
		usleep(150);
	}
}

int	main(int argc, char **argv)
{
	int		pid;
	int		posicion;
	char	*cadena;

	posicion = 0;
	cadena = argv[2];
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		while (cadena[posicion] != '\0')
		{
			ft_char_signal(cadena[posicion], pid);
			posicion++;
		}
		ft_char_signal('\n', pid);
	}
	if (argc != 3 || ft_strlen(argv[2]) == 0)
	{
		ft_printf("\033[0;91mError. Introduzca PID y un mensaje\033[0;39m\n");
		return (1);
	}
	return (0);
}
