/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:18:12 by dramirez          #+#    #+#             */
/*   Updated: 2022/11/27 17:05:25 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_conversiones(va_list argum, const char *cadena, int contador);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_numberlen(long int numero);
char	*ft_itoa(long int numero);
int		ft_putnbr(int numero);
int		ft_basenum(size_t numero, int base);
char	*ft_numachar(unsigned int numero);
int		ft_unsigned(unsigned int numero);
int		ft_hexad(unsigned long long numero, char conversor);
int		ft_putpuntero(unsigned long puntero);

#endif
