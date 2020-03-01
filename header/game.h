/*
** EPITECH PROJECT, 2019
** header file my
** File description:
** library my
*/

#ifndef MY_H_
#define MY_H_

#include "structure.h"

sfRenderWindow *create_window(void);
void init_variable(data_t *data);
void event_gestion(data_t *data);
void destroy_variable(data_t *data);

void game_instruction(data_t *data);
void display_sprite(data_t *data);

int my_strlen(char const *str);
int my_putstr(char const *str);
void my_putchar(char c);
int print_help(int ac, char **av);
void init_button(data_t *data);
void detect_button(data_t *data);

#endif