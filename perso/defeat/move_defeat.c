/*
** EPITECH PROJECT, 2019
** move_defeat
** File description:
** move_defeat
*/

#include "../../header/structure.h"
#include "../../header/enemy.h"
#include "../../header/perso.h"

void disp_defeat(data_t *data)
{
    sfRenderWindow_drawSprite(data->window, data->perso_defeat.sprite, 0);
    if (data->perso_defeat.active_defeat_msg == 1) {
        sfRenderWindow_drawSprite(data->window,
        data->perso_defeat.sprite_lose_msg, 0);
        sfRenderWindow_drawSprite(data->window,
        data->restart_button.sprite, 0);
    }
}

void init_perso_defeat(data_t *data)
{
    data->perso_defeat.texture = sfTexture_createFromFile(
    "pictures/perso/faint/defeat.png", NULL);
    data->perso_defeat.sprite = sfSprite_create();
    sfSprite_setTexture(data->perso_defeat.sprite,
    data->perso_defeat.texture, 0);
    sfSprite_setTextureRect(data->perso_defeat.sprite,
    (sfIntRect){0, 0, 131, 184});
    sfSprite_setPosition(data->perso_defeat.sprite, (sfVector2f){100, 728});
    data->perso_defeat.texture_lose_msg = sfTexture_createFromFile(
    "pictures/you_lose.png", NULL);
    data->perso_defeat.sprite_lose_msg = sfSprite_create();
    sfSprite_setTexture(data->perso_defeat.sprite_lose_msg,
    data->perso_defeat.texture_lose_msg, 0);
    sfSprite_setPosition(data->perso_defeat.sprite_lose_msg,
    (sfVector2f){(1920 - 402)/ 2, (1080 - 350) / 2});
}

void move_defeat(data_t *data)
{
    animation_defeat(data);
}