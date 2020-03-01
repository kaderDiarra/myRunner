/*
** EPITECH PROJECT, 2019
** enemy_three_main
** File description:
** enemy one main
*/

#include "../../header/structure.h"
#include "../../header/enemy.h"

void disp_enemy_three(data_t *data)
{
    sfRenderWindow_drawSprite(data->window, data->enemy_three.sprite, 0);
}

void init_enemy_three(data_t *data)
{
    data->enemy_three.texture = sfTexture_createFromFile(
    "pictures/enemies/enemy_three/flapy_bird2.png", NULL);
    data->enemy_three.sprite = sfSprite_create();
    sfSprite_setTexture(data->enemy_three.sprite,
    data->enemy_three.texture, 0);
    sfSprite_setTextureRect(data->enemy_three.sprite,
    (sfIntRect){0, 0, 119, 96});
    sfSprite_setPosition(data->enemy_three.sprite, (sfVector2f){4500, 650});
    data->enemy_three.clock = sfClock_create();
}

static void mv_en_three(data_t *data)
{
    sfVector2f pos = sfSprite_getPosition(data->enemy_three.sprite);
    sfVector2f pos_enemy_one = sfSprite_getPosition(data->enemy_one.sprite);
    sfVector2f pos_enemy_two = sfSprite_getPosition(data->enemy_two.sprite);
    int spawn_pos = 0;

    if (pos.x > -800){
        pos.x -= data->enemy_speed;
    } else {
        spawn_pos = rand() % (6000 - 5000) + 5000;
        pos.x = spawn_pos;
    }
    sfSprite_setPosition(data->enemy_three.sprite, pos);
}

void move_enemy_three(data_t *data)
{
    animation_enemy_three(data);
    mv_en_three(data);
}