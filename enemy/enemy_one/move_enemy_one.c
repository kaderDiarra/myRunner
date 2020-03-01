/*
** EPITECH PROJECT, 2019
** move_enemy_one
** File description:
** move enemy one
*/

#include "../../header/structure.h"

void disp_enemy_one(data_t *data)
{
    sfRenderWindow_drawSprite(data->window, data->enemy_one.sprite, 0);
}

void init_enemy_one(data_t *data)
{
    data->enemy_one.texture = sfTexture_createFromFile(
    "pictures/enemies/enemy_one/spike_monster_a.png", NULL);
    data->enemy_one.sprite = sfSprite_create();
    sfSprite_setTexture(data->enemy_one.sprite, data->enemy_one.texture, 0);
    sfSprite_setPosition(data->enemy_one.sprite, (sfVector2f){2000, 792});
}

void move_enemy_one(data_t *data)
{
    sfVector2f pos = sfSprite_getPosition(data->enemy_one.sprite);
    sfVector2f pos_enemy_two = sfSprite_getPosition(data->enemy_two.sprite);
    sfVector2f pos_enemy_three = sfSprite_getPosition(
    data->enemy_three.sprite);
    int spawn_pos = 0;

    if (pos.x > -1200){
        pos.x -= data->enemy_speed;
    } else {
        spawn_pos = rand() % (3000 - 2000) + 2000;
        pos.x = spawn_pos;
    }
    sfSprite_setPosition(data->enemy_one.sprite, pos);
}
