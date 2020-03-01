/*
** EPITECH PROJECT, 2019
** game.c
** File description:
** game loop
*/

#include <time.h>
#include <stdlib.h>
#include <SFML/Audio.h>
#include "header/structure.h"
#include "header/game.h"

void runner(data_t *data)
{
    init_variable(data);
    sfMusic_setLoop(data->my_music, sfTrue);
    sfMusic_play(data->my_music);
    while (sfRenderWindow_isOpen(data->window)){
        event_gestion(data);
        game_instruction(data);
        sfRenderWindow_clear(data->window, sfBlack);
        display_sprite(data);
        sfRenderWindow_display(data->window);
    }
}

int main(int ac, char **av)
{
    data_t data;

    if (print_help(ac, av) == 0)
        return (84);
    data.window = create_window();
    srand(time(NULL));
    runner(&data);
    destroy_variable(&data);
    return (0);
}
