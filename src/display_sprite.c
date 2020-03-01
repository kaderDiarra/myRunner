/*
** EPITECH PROJECT, 2019
** display_sprite
** File description:
** display sprites
*/

#include "../header/structure.h"
#include "../header/map_one.h"
#include "../header/enemy.h"
#include "../header/perso.h"

void display_sprite(data_t *data)
{
    display_map_one(data);
    disp_enemy_one(data);
    disp_enemy_two(data);
    disp_enemy_three(data);
    if (data->defeat == 0){
        disp_perso(data);
    } else
        disp_defeat(data);
    sfRenderWindow_drawSprite(data->window, data->music_button.sprite, 0);
}