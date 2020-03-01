/*
** EPITECH PROJECT, 2019
** init_variable
** File description:
** initialize variable
*/

#include "../header/structure.h"
#include "../header/game.h"
#include "../header/map_one.h"
#include "../header/enemy.h"
#include "../header/perso.h"

void init_variable(data_t *data)
{
    data->my_music = sfMusic_createFromFile("pictures/music.wav");
    data->right_click = 0;
    data->enemy_speed = 6;
    data->defeat = 0;
    data->perso_defeat.active_defeat_msg = 0;
    init_map_one_position(data);
    init_texture_map_one(data);
    init_sprite_map_one(data);
    init_enemy_one(data);
    init_enemy_two(data);
    init_enemy_three(data);
    init_perso(data);
    init_perso_defeat(data);
    init_button(data);
    data->clock_click = sfClock_create();
}
