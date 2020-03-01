##
## EPITECH PROJECT, 2019
## do_op
## File description:
## do operation
##

SRC	=	create_window.c \
		my_putchar.c \
		my_putstr.c \
		my_strlen.c \
		../../src/print_help.c \
		../../src/init_variable.c \
		../../src/event_gestion.c \
		../../src/destroy_variable.c \
		../../src/display_sprite.c \
		../../src/game_instruction.c \
		../../map_one/init/init_map_one_layer.c \
		../../map_one/init/init_map_one_position.c \
		../../map_one/init/init_map_one_layer_pos.c \
		../../map_one/move/mv_map_one.c \
		../../map_one/move/mv_map_one_layers.c \
		../../map_one/display_map/display_map_one.c \
		../../enemy/enemy_one/move_enemy_one.c \
		../../enemy/enemy_two/move_enemy_two.c \
		../../enemy/enemy_three/move_enemy_three.c \
		../../enemy/enemy_three/animation/animation_enemy_three.c \
		../../perso/init_perso.c \
		../../perso/move_perso.c \
		../../perso/animation/animation_perso.c \
		../../perso/animation/run.c \
		../../perso/defeat/move_defeat.c \
		../../perso/defeat/animation/animation_defeat.c \
		../../button/init_button.c \
		../../button/detect_button.c \

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

BIN	=	../../my_runner

FILE = ../../game.c

INCLUDE	=	-I../../include -L. -lmy

FLAG =	-lcsfml-graphics -lcsfml-system -lcsfml-window -lcsfml-audio

all:	$(NAME) COMPILE

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

COMPILE:
	gcc -o $(BIN) $(FILE) $(INCLUDE) $(FLAG)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -f $(BIN)

re:	fclean all
