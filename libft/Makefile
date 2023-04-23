# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/11 22:59:59 by dramirez          #+#    #+#              #
#    Updated: 2023/04/11 22:59:59 by dramirez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIBFT=		libft/ft_isalpha.c \
			libft/ft_isdigit.c \
			libft/ft_isalnum.c \
			libft/ft_isascii.c \
			libft/ft_isprint.c \
			libft/ft_strlen.c \
			libft/ft_memset.c \
			libft/ft_bzero.c \
			libft/ft_memcpy.c \
			libft/ft_memmove.c \
			libft/ft_strlcpy.c \
			libft/ft_strlcat.c \
			libft/ft_toupper.c \
			libft/ft_tolower.c \
			libft/ft_strchr.c \
			libft/ft_strrchr.c \
			libft/ft_strncmp.c \
			libft/ft_memchr.c \
			libft/ft_memcmp.c \
			libft/ft_strnstr.c \
			libft/ft_atoi.c \
			libft/ft_calloc.c \
			libft/ft_strdup.c \
			libft/ft_substr.c \
			libft/ft_strjoin.c \
			libft/ft_strtrim.c \
			libft/ft_split.c \
			libft/ft_itoa.c \
			libft/ft_strmapi.c \
			libft/ft_striteri.c \
			libft/ft_putchar_fd.c \
			libft/ft_putstr_fd.c \
			libft/ft_putendl_fd.c \
			libft/ft_putnbr_fd.c \
			libft/ft_lstnew_bonus.c \
			libft/ft_lstadd_front_bonus.c \
			libft/ft_lstsize_bonus.c \
			libft/ft_lstlast_bonus.c \
			libft/ft_lstadd_back_bonus.c \
			libft/ft_lstdelone_bonus.c \
			libft/ft_lstclear_bonus.c \
			libft/ft_lstiter_bonus.c \
			libft/ft_lstmap_bonus.c \

PRINTF=			printf/ft_printf.c \
			printf/ft_putchar.c \
			printf/ft_putstr.c \
			printf/ft_numberlen.c \
			printf/ft_itoa_printf.c \
			printf/ft_putnbr.c \
			printf/ft_basenum.c \
			printf/ft_numachar.c \
			printf/ft_unsigned.c \
			printf/ft_hexad.c \
			printf/ft_putpuntero.c \

GNL=		get_next_line/get_next_line_bonus.c \
			get_next_line/get_next_line_utils_bonus.c \

#PUSHSWAP=	push_swap/src/1_ft_check_int.c \
			push_swap/src/2_ft_check_num.c \
			push_swap/src/3_ft_listas_utils.c \
			push_swap/src/3_ft_listas_utils2.c \
			push_swap/src/4_ft_push.c \
			push_swap/src/4_ft_rotar_reverso.c \
			push_swap/src/4_ft_rotar.c \
			push_swap/src/4_ft_swap.c \
			push_swap/src/5_ft_mover.c \
			push_swap/src/5_ft_posiciones_coste.c \
			push_swap/src/5_ft_posiciones.c \
			push_swap/src/6_ft_ordenar_3.c \
			push_swap/src/6_ft_ordenar_3mas.c \
			push_swap/src/6_ft_ordenar_utils.c \
			push_swap/src/main.c \

OBJS_LIBFT = $(LIBFT:.c=.o)

OBJS_PRINTF = $(PRINTF:.c=.o)

OBJS_GNL = $(GNL:.c=.o)

#OBJS_PUSHSWAP = $(PUSHSWAP:.c=.o)

AR = ar -rcs

#Compilador
CC = gcc

#Flags del compilador
CFLAGS = -Wall -Werror -Wextra

#Variable del clean
RM = rm -f

#Funcion principal
all: $(NAME)

#Compilamos la libreria
$(NAME): $(OBJS_LIBFT) $(OBJS_PRINTF) $(OBJS_GNL)
	$(AR) $(NAME) $(OBJS_LIBFT) $(OBJS_PRINTF) $(OBJS_GNL)

#Borramos los objetos que no necesitamos
clean:
	$(RM) $(OBJS_LIBFT) $(OBJS_PRINTF) $(OBJS_GNL)

fclean:	clean
		$(RM) $(NAME)

re: fclean all

#Le decimos que no cree ningun archivo con esos nombres
.PHONY: all clean fclean re