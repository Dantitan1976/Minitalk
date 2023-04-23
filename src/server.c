/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 19:39:13 by dramirez          #+#    #+#             */
/*   Updated: 2023/04/14 19:39:13 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

void	ft_handler(int sig_cliente)
{
	static int	posicion;
	static char	char_env;

	if (sig_cliente == SIGUSR1)
		char_env |= (1 << posicion);
	posicion++;
	if (posicion == 8)
	{
		ft_printf("%c", char_env);
		posicion = 0;
		char_env = 0;
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	(void)argv;
	if (argc != 1)
	{
		ft_printf("\033[0;91mError. El servidor no maneja argumentos\n");
		ft_printf("Se introducen en el cliente\033[0;39m\n");
		ft_printf("Escriba ./server\033[0;39m\n");
		return (0);
	}
	pid = getpid();
	ft_printf("PID del servidor: %d\n", pid);
	ft_printf("Esperando mensaje...\n");
	while (argc == 1)
	{
		signal(SIGUSR1, ft_handler);
		signal(SIGUSR2, ft_handler);
		pause();
	}
	return (0);
}
