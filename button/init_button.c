/*
** EPITECH PROJECT, 2019
** init_variable
** File description:
** initialize variable
*/

#include "../header/structure.h"

void init_music_button(data_t *data)
{
    data->mouse_x = 0;
    data->mouse_y = 0;
    data->active_music = 0;
    data->music_button.texture = sfTexture_createFromFile(
    "pictures/music_button.png", NULL);
    data->music_button.sprite = sfSprite_create();
    sfSprite_setTexture(data->music_button.sprite, data->music_button.texture,
    0);
    data->music_button.rect.top = 0;
    data->music_button.rect.left = 0;
    data->music_button.rect.width = 176;
    data->music_button.rect.height = 194;
    sfSprite_setTextureRect(data->music_button.sprite,
    data->music_button.rect);
    sfSprite_setScale(data->music_button.sprite, (sfVector2f){0.4, 0.4});
    sfSprite_setPosition(data->music_button.sprite, (sfVector2f){3, 5});
}

void init_restart_button(data_t *data)
{
    data->restart_button.texture = sfTexture_createFromFile(
    "pictures/restart_button.png", NULL);
    data->restart_button.sprite = sfSprite_create();
    sfSprite_setTexture(data->restart_button.sprite,
    data->restart_button.texture, 0);
    sfSprite_setScale(data->restart_button.sprite, (sfVector2f){0.18, 0.18});
    sfSprite_setPosition(data->restart_button.sprite,
    (sfVector2f){((1920 - 127)/ 2), ((1080 - 100) / 2)});
}

void init_button(data_t *data)
{
    init_music_button(data);
    init_restart_button(data);
}