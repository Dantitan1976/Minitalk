/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 22:48:05 by dramirez          #+#    #+#             */
/*   Updated: 2023/04/11 22:48:05 by dramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

//Librerias del Libft y GetNextLine
# include <stdlib.h>
# include <unistd.h>

//Libreria del Printf
# include <stdarg.h>
# include <stdio.h>

//Libreria del Push_Swap
# include <limits.h>

//Funciones del Libft
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
size_t		ft_strlen(const char *s);
void		*ft_memset(void *s, int c, size_t n);
void		ft_bzero(void *str, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
int			ft_toupper(int c);
int			ft_tolower(int c);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
char		*ft_strnstr(const char *big, const char *little, size_t len);
int			ft_atoi(const char *nptr);
void		*ft_calloc(size_t nmemb, size_t size);
char		*ft_strdup(const char *s);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void*));
void		ft_lstclear(t_list **lst, void (*del)(void*));
void		ft_lstiter(t_list *lst, void (*f)(void*));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

//Funciones del Printf
int			ft_printf(const char *str, ...);
int			ft_conversiones(va_list argum, const char *cadena, int contador);
int			ft_putchar(char c);
int			ft_putstr(char *str);
int			ft_numberlen(long int numero);
char		*ft_itoa_printf(long int numero);
int			ft_putnbr(int numero);
int			ft_basenum(size_t numero, int base);
char		*ft_numachar(unsigned int numero);
int			ft_unsigned(unsigned int numero);
int			ft_hexad(unsigned long long numero, char conversor);
int			ft_putpuntero(unsigned long puntero);

//Funciones del Get Next Line
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 420
# endif

# ifndef FD_MAX
#  define FD_MAX 1024
# endif

size_t		ft_strlengnl(const char *cadena);
char		*ft_strchr(const char *cadena, int caract);
char		*ft_strdup(const char *src);
char		*ft_substr(const char *str, unsigned int inicio, size_t longitud);
char		*ft_strjoin(const char *str1, const char *str2);
char		*get_next_line(int fd);

//Funciones del Push_Swap
typedef struct s_bloques
{
	struct s_bloques	*siguiente;
	int					numero;
	int					indice;
	int					posicion;
	int					posicion_objetivo;
	int					coste_a;
	int					coste_b;
}	t_bloques;

int			ft_num_abs(int numero);
char		ft_check_num(char *str);
long int	ft_check_int(char *str);
char		ft_check_dobles_int(int argc, char **argv);
void		ft_check_args_int(int argc, char **argv);
int			ft_numseparad(char *str, char separador);
char		ft_check_dobles(int argc, char **argv);
void		ft_check_args(int argc, char **argv);
t_bloques	*ft_nuevalista(int nuevo_nodo);
t_bloques	*ft_datosenlista_int(int argc, char **argv);
t_bloques	*ft_datosenlista_num(int argc, char **argv);
void		ft_indices(t_bloques *pila_a, int longitud_pila);
t_bloques	*ft_lstpenultimo(t_bloques *pilas);
void		ft_error(t_bloques **stack_a, t_bloques **stack_b);
void		ft_liberarbloques(t_bloques **bloques);
void		ft_lstadd_back_ps(t_bloques **lst, t_bloques *new);
t_bloques	*ft_lstlast_ps(t_bloques *lst);
int			ft_lstsize_ps(t_bloques *lst);
void		ft_pa(t_bloques **bloque_a, t_bloques **bloque_b);
void		ft_pb(t_bloques **bloque_a, t_bloques **bloque_b);
void		ft_rra(t_bloques **bloque_a);
void		ft_rrb(t_bloques **bloque_b);
void		ft_rrr(t_bloques **bloque_a, t_bloques **bloque_b);
void		ft_ra(t_bloques **bloque_a);
void		ft_rb(t_bloques **bloque_b);
void		ft_rr(t_bloques **bloque_a, t_bloques **bloque_b);
void		ft_sa(t_bloques **bloque_a);
void		ft_sb(t_bloques **bloque_b);
void		ft_ss(t_bloques **bloque_a, t_bloques **bloque_b);
void		ft_mover(t_bloques **bloque_a, t_bloques **bloque_b,
				int coste_a, int coste_b);
void		ft_coste_ba(t_bloques **bloque_a, t_bloques **bloque_b);
void		ft_mov_mas_efic(t_bloques **bloque_a, t_bloques **bloque_b);
int			pos_indice_masbajo(t_bloques **bloque);
void		ft_asigna_pos_obj(t_bloques **bloque_a, t_bloques **bloque_b);
void		ft_ordenar_3(t_bloques **bloque);
void		ft_ordenar_3mas(t_bloques **bloque_a, t_bloques **bloque_b);
int			ft_check_orden(t_bloques *bloque);
void		ft_imprimirlista(t_bloques *bloque_a);
#endif