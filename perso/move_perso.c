/*
** EPITECH PROJECT, 2019
** move_perso
** File description:
** move perso
*/

#include "../header/structure.h"
#include "../header/perso.h"

void jump_fall(data_t *data)
{
    sfVector2f pos = sfSprite_getPosition(data->perso.s_jump);

    if (pos.y < 700 && data->perso.bool_jump == 1){
        data->perso.rect_jump.left = 125;
        data->perso.rect_jump.top = 0;
        data->perso.rect_jump.width = 135;
        data->perso.rect_jump.height = 190;
        sfSprite_setTextureRect(data->perso.s_jump, data->perso.rect_jump);
        pos.y += 4;
        sfSprite_setPosition(data->perso.s_jump, pos);
        data->perso.bool_move = 1;
    } else {
        data->perso.bool_jump = 0;
        data->perso.is_jumping = 0;
        data->perso.bool_move = 0;
        sfClock_restart(data->perso.clock);
    }
    if (pos.y > 690)
        data->perso.can_jump = 1;
}

void jump_up(data_t *data)
{
    sfVector2f pos = sfSprite_getPosition(data->perso.s_jump);

    if (pos.y >= 550 && data->perso.bool_jump == 0){
        data->perso.rect_jump.left = 0;
        data->perso.rect_jump.top = 0;
        data->perso.rect_jump.width = 125;
        data->perso.rect_jump.height = 190;
        sfSprite_setTextureRect(data->perso.s_jump, data->perso.rect_jump);
        pos.y -= 4;
        sfSprite_setPosition(data->perso.s_jump, pos);
        data->perso.bool_move = 1;
    } else {
        data->perso.bool_jump = 1;
        data->perso.is_jumping = 1;
        jump_fall(data);
    }
}

void move_perso(data_t *data)
{
    if (data->perso.bool_move == 1){
        if (data->perso.active_run == 1){
            sfClock_restart(data->perso.clock_jump);
            data->perso.active_run = 0;
        }
        jump_up(data);
    } else if (data->perso.bool_move == 0){
        if (data->perso.active_run == 1){
            sfClock_restart(data->perso.clock);
            data->perso.active_run = 0;
        }
        data->perso.can_jump = 1;
        animation_perso(data);
    }
}
