/*
** EPITECH PROJECT, 2019
** animation_enemy_three
** File description:
** animation enemy three
*/

#include "../../../header/structure.h"

static void fly_move_one(data_t *data)
{
    data->enemy_three.times = sfClock_getElapsedTime(data->enemy_three.clock);
    if (sfTime_asMilliseconds(data->enemy_three.times) > 0
    && sfTime_asMilliseconds(data->enemy_three.times) < 75){
        data->enemy_three.rect.left = 0;
        data->enemy_three.rect.top = 0;
        data->enemy_three.rect.width = 119;
        data->enemy_three.rect.height = 96;
        sfSprite_setTextureRect(data->enemy_three.sprite,
        data->enemy_three.rect);
    }
}

static void fly_move_two(data_t *data)
{
    data->enemy_three.times = sfClock_getElapsedTime(data->enemy_three.clock);
    if (sfTime_asMilliseconds(data->enemy_three.times) > 75
    && sfTime_asMilliseconds(data->enemy_three.times) < 150){
        data->enemy_three.rect.left = 119;
        data->enemy_three.rect.top = 0;
        data->enemy_three.rect.width = 120;
        data->enemy_three.rect.height = 96;
        sfSprite_setTextureRect(data->enemy_three.sprite,
        data->enemy_three.rect);
    }
}

static void fly_move_three(data_t *data)
{
    data->enemy_three.times = sfClock_getElapsedTime(data->enemy_three.clock);
    if (sfTime_asMilliseconds(data->enemy_three.times) > 150
    && sfTime_asMilliseconds(data->enemy_three.times) < 225){
        data->enemy_three.rect.left = 239;
        data->enemy_three.rect.top = 0;
        data->enemy_three.rect.width = 119;
        data->enemy_three.rect.height = 96;
        sfSprite_setTextureRect(data->enemy_three.sprite,
        data->enemy_three.rect);
    }
}

static void fly_move_four(data_t *data)
{
    data->enemy_three.times = sfClock_getElapsedTime(data->enemy_three.clock);
    if (sfTime_asMilliseconds(data->enemy_three.times) > 225
    && sfTime_asMilliseconds(data->enemy_three.times) < 300){
        data->enemy_three.rect.left = 358;
        data->enemy_three.rect.top = 0;
        data->enemy_three.rect.width = 120;
        data->enemy_three.rect.height = 96;
        sfSprite_setTextureRect(data->enemy_three.sprite,
        data->enemy_three.rect);
        sfClock_restart(data->enemy_three.clock);
    }
}

void animation_enemy_three(data_t *data)
{
    fly_move_one(data);
    fly_move_two(data);
    fly_move_three(data);
    fly_move_four(data);
}
