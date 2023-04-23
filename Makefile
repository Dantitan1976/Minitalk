# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/14 21:44:20 by dramirez          #+#    #+#              #
#    Updated: 2023/04/14 21:44:20 by dramirez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_SERVIDOR = server
NAME_CLIENTE = client
NAME_SERVIDOR_BONUS = server_bonus
NAME_CLIENTE_BONUS = client_bonus

SRC_SERVER =	./src/server.c
SRC_CLIENT = 	./src/client.c
SRC_SERVER_BONUS = ./src/server_bonus.c 
SRC_CLIENT_BONUS = ./src/client_bonus.c

OBJS_SERVER = $(SRC_SERVER:.c=.o)
OBJS_CLIENT = $(SRC_CLIENT:.c=.o)
OBJS_SERVER_BONUS = $(SRC_SERVER_BONUS:.c=.o)
OBJS_CLIENT_BONUS = $(SRC_CLIENT_BONUS:.c=.o)

DEF_COLOR	= \033[0;39m
VERDE		= \033[1;92m
ROJO		= \033[0;91m

#Compilacion#
LIBRERIA = libft/libft.a

AR = ar -rcs

CC = gcc

CFLAGS = -Wall -Werror -Wextra -g

RM = rm -f

#Reglas#

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all: libft compilar

norminette:
	@echo "\n ****** NORMINETTE DE 42 ******\n"
	@norminette .

libft:
	@echo "\n$(VERDE) ***** COMPILANDO LIBRERIA *****$(DEF_COLOR)\n"
	@make -C libft
	@echo "$(VERDE)Librería compilada$(DEF_COLOR)\n"

compilar: $(NAME_SERVIDOR) $(NAME_CLIENTE)

compilar_bonus: $(NAME_SERVIDOR_BONUS) $(NAME_CLIENTE_BONUS)

bonus: libft compilar_bonus

$(NAME_SERVIDOR): $(OBJS_SERVER)
	@echo "\n$(VERDE)****** COMPILANDO PROGRAMA SERVIDOR *****$(DEF_COLOR)\n"
	$(CC) $(CFLAGS) $(OBJS_SERVER) $(LIBRERIA) -o $(NAME_SERVIDOR)
	@echo "\n$(VERDE)Programa servidor compilado con éxito$(DEF_COLOR)"

$(NAME_CLIENTE): $(OBJS_CLIENT)
	@echo "\n$(VERDE)****** COMPILANDO PROGRAMA CLIENTE ******$(DEF_COLOR)\n"
	$(CC) $(CFLAGS) $(OBJS_CLIENT) $(LIBRERIA) -o $(NAME_CLIENTE)
	@echo "\n$(VERDE)Programa cliente compilado con éxito$(DEF_COLOR)"

$(NAME_SERVIDOR_BONUS): $(OBJS_SERVER_BONUS)
	@echo "\n$(VERDE)****** COMPILANDO PROGRAMA SERVIDOR BONUS*****$(DEF_COLOR)\n"
	$(CC) $(CFLAGS) $(OBJS_SERVER_BONUS) $(LIBRERIA) -o $(NAME_SERVIDOR_BONUS)
	@echo "$(VERDE)Programa servidor bonus compilado con éxito$(DEF_COLOR)\n"

$(NAME_CLIENTE_BONUS): $(OBJS_CLIENT_BONUS)
	@echo "\n$(VERDE)****** COMPILANDO PROGRAMA CLIENTE BONUS******$(DEF_COLOR)\n"
	$(CC) $(CFLAGS) $(OBJS_CLIENT_BONUS) $(LIBRERIA) -o $(NAME_CLIENTE_BONUS)
	@echo "$(VERDE)Programa cliente bonus compilado con éxito$(DEF_COLOR)\n"

clean:
	@echo "\n$(VERDE)****** ELIMINANDO FICHEROS OBJETO******$(DEF_COLOR)\n"
	make clean -C libft
	$(RM) $(OBJS_CLIENT) $(OBJS_SERVER) $(OBJS_CLIENT_BONUS) $(OBJS_SERVER_BONUS)
	@echo "$(VERDE)Eliminación de ficheros objeto terminada con éxito$(DEF_COLOR)\n"

fclean: clean
	make fclean -C libft
	@echo "\n$(VERDE)****** ELIMINANDO FICHEROS EJECUTABLES******$(DEF_COLOR)\n"
	$(RM) $(NAME_CLIENTE) $(NAME_SERVIDOR) $(NAME_CLIENTE_BONUS) $(NAME_SERVIDOR_BONUS)
	@echo "$(VERDE)Eliminación de ficheros ejecutables terminada con éxito$(DEF_COLOR)\n"

re: fclean all bonus

.PHONY: all norminette libft compilar compilar_bonus bonus clean fclean re