/*
** EPITECH PROJECT, 2019
** init_perso
** File description:
** init enemy one var
*/

#include "../header/structure.h"

void disp_perso(data_t *data)
{
    if (data->perso.bool_move == 1){
        sfRenderWindow_drawSprite(data->window, data->perso.s_jump, 0);
    } else if (data->perso.bool_move == 2){
        sfRenderWindow_drawSprite(data->window, data->perso.s_slide, 0);
    } else
        sfRenderWindow_drawSprite(data->window, data->perso.sprite, 0);
}

void init_perso_slide(data_t *data)
{
    data->perso.active_run = 0;
    data->perso.can_jump = 0;
    data->perso.t_slide = sfTexture_createFromFile(
    "pictures/perso/sliding/perso_slide.png", NULL);
    data->perso.s_slide = sfSprite_create();
    sfSprite_setTexture(data->perso.s_slide, data->perso.t_slide, 0);
    sfSprite_setPosition(data->perso.s_slide, (sfVector2f){100, 752});
}

void init_perso(data_t *data)
{
    data->perso.bool_move = 0;
    data->perso.is_jumping = 0;
    data->perso.bool_jump = 0;
    data->perso.texture = sfTexture_createFromFile(
    "pictures/perso/run/run_perso.png", NULL);
    data->perso.t_jump = sfTexture_createFromFile(
    "pictures/perso/jump/perso_jump.png", NULL);
    data->perso.sprite = sfSprite_create();
    data->perso.s_jump = sfSprite_create();
    sfSprite_setTexture(data->perso.sprite, data->perso.texture, sfTrue);
    sfSprite_setTexture(data->perso.s_jump, data->perso.t_jump, sfTrue);
    sfSprite_setTextureRect(data->perso.s_jump, (sfIntRect){0, 0, 125, 190});
    sfSprite_setPosition(data->perso.sprite, (sfVector2f){100, 700});
    sfSprite_setTextureRect(data->perso.sprite, (sfIntRect){0, 0, 130, 196});
    data->perso.clock = sfClock_create();
    sfSprite_setPosition(data->perso.s_jump, (sfVector2f){100, 700});
    data->perso.clock_jump = sfClock_create();
    init_perso_slide(data);
}