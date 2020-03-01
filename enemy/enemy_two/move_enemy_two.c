/*
** EPITECH PROJECT, 2019
** move_enemy_two
** File description:
** move enemy two
*/

#include "../../header/structure.h"

void disp_enemy_two(data_t *data)
{
    sfRenderWindow_drawSprite(data->window, data->enemy_two.sprite, 0);
}

void init_enemy_two(data_t *data)
{
    data->enemy_two.texture = sfTexture_createFromFile(
    "pictures/enemies/enemy_two/spike_monster_b.png", NULL);
    data->enemy_two.sprite = sfSprite_create();
    sfSprite_setTexture(data->enemy_two.sprite, data->enemy_two.texture, 0);
    sfSprite_setPosition(data->enemy_two.sprite, (sfVector2f){5500, 797});
}

void move_enemy_two(data_t *data)
{
    sfVector2f pos = sfSprite_getPosition(data->enemy_two.sprite);
    sfVector2f pos_enemy_one = sfSprite_getPosition(data->enemy_one.sprite);
    sfVector2f pos_enemy_three = sfSprite_getPosition(
    data->enemy_three.sprite);
    int spawn_pos = 0;

    if (pos.x > -210){
        pos.x -= data->enemy_speed;
    } else {
        spawn_pos = rand() % (8000 - 7000) + 8000;
        pos.x = spawn_pos;
    }
    sfSprite_setPosition(data->enemy_two.sprite, pos);
}
