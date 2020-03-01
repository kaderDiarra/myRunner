/*
** EPITECH PROJECT, 2019
** animation_perso
** File description:
** animation enemy three
*/

#include "../../header/structure.h"

void run_one(data_t *data)
{
    data->perso.times = sfClock_getElapsedTime(data->perso.clock);
    if (sfTime_asMilliseconds(data->perso.times) > 0
    && sfTime_asMilliseconds(data->perso.times) < 75){
        data->perso.rect.left = 0;
        data->perso.rect.top = 0;
        data->perso.rect.width = 130;
        data->perso.rect.height = 196;
        sfSprite_setTextureRect(data->perso.sprite, data->perso.rect);
    }
}

void run_two(data_t *data)
{
    data->perso.times = sfClock_getElapsedTime(data->perso.clock);
    if (sfTime_asMilliseconds(data->perso.times) > 75
    && sfTime_asMilliseconds(data->perso.times) < 150){
        data->perso.rect.left = 130;
        data->perso.rect.top = 0;
        data->perso.rect.width = 131;
        data->perso.rect.height = 196;
        sfSprite_setTextureRect(data->perso.sprite, data->perso.rect);
    }
}

void run_three(data_t *data)
{
    data->perso.times = sfClock_getElapsedTime(data->perso.clock);
    if (sfTime_asMilliseconds(data->perso.times) > 150
    && sfTime_asMilliseconds(data->perso.times) < 225){
        data->perso.rect.left = 261;
        data->perso.rect.top = 0;
        data->perso.rect.width = 130;
        data->perso.rect.height = 196;
        sfSprite_setTextureRect(data->perso.sprite, data->perso.rect);
    }
}

void run_four(data_t *data)
{
    data->perso.times = sfClock_getElapsedTime(data->perso.clock);
    if (sfTime_asMilliseconds(data->perso.times) > 225
    && sfTime_asMilliseconds(data->perso.times) < 300){
        data->perso.rect.left = 391;
        data->perso.rect.top = 0;
        data->perso.rect.width = 131;
        data->perso.rect.height = 196;
        sfSprite_setTextureRect(data->perso.sprite, data->perso.rect);
    }
}

void run_five(data_t *data)
{
    data->perso.times = sfClock_getElapsedTime(data->perso.clock);
    if (sfTime_asMilliseconds(data->perso.times) > 225
    && sfTime_asMilliseconds(data->perso.times) < 300){
        data->perso.rect.left = 522;
        data->perso.rect.top = 0;
        data->perso.rect.width = 130;
        data->perso.rect.height = 196;
        sfSprite_setTextureRect(data->perso.sprite, data->perso.rect);
        sfClock_restart(data->perso.clock);
    }
}
