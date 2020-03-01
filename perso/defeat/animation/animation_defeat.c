/*
** EPITECH PROJECT, 2019
** animation_defeat
** File description:
** animation defeat
*/

#include "../../../header/structure.h"

static void def_move_one(data_t *data)
{
    sfVector2f pos = sfSprite_getPosition(data->perso_defeat.sprite);

    if (pos.x <= 130){
        data->perso_defeat.rect.left = 0;
        data->perso_defeat.rect.top = 0;
        data->perso_defeat.rect.width = 131;
        data->perso_defeat.rect.height = 184;
        sfSprite_setTextureRect(data->perso_defeat.sprite,
        data->perso_defeat.rect);
        pos.x += 5;
        sfSprite_setPosition(data->perso_defeat.sprite, pos);
    }
}

static void def_move_two(data_t *data)
{
    sfVector2f pos = sfSprite_getPosition(data->perso_defeat.sprite);

    if (pos.x <= 160){
        data->perso_defeat.rect.left = 131;
        data->perso_defeat.rect.top = 0;
        data->perso_defeat.rect.width = 156;
        data->perso_defeat.rect.height = 184;
        sfSprite_setTextureRect(data->perso_defeat.sprite,
        data->perso_defeat.rect);
        pos.x += 1;
        sfSprite_setPosition(data->perso_defeat.sprite, pos);
    }
}

static void def_move_three(data_t *data)
{
    sfVector2f pos = sfSprite_getPosition(data->perso_defeat.sprite);

    if (pos.x <= 190){
        data->perso_defeat.rect.left = 287;
        data->perso_defeat.rect.top = 0;
        data->perso_defeat.rect.width = 176;
        data->perso_defeat.rect.height = 184;
        sfSprite_setTextureRect(data->perso_defeat.sprite,
        data->perso_defeat.rect);
        pos.x += 1;
        sfSprite_setPosition(data->perso_defeat.sprite, pos);
    }
}

static void def_move_four(data_t *data)
{
    sfVector2f pos = sfSprite_getPosition(data->perso_defeat.sprite);

    if (pos.x <= 220){
        data->perso_defeat.rect.left = 463;
        data->perso_defeat.rect.top = 0;
        data->perso_defeat.rect.width = 172;
        data->perso_defeat.rect.height = 184;
        sfSprite_setTextureRect(data->perso_defeat.sprite,
        data->perso_defeat.rect);
        pos.x += 1;
        sfSprite_setPosition(data->perso_defeat.sprite, pos);
        data->perso_defeat.active_defeat_msg = 1;
    }
}

void animation_defeat(data_t *data)
{
    def_move_one(data);
    def_move_two(data);
    def_move_three(data);
    def_move_four(data);
}
