/*
** EPITECH PROJECT, 2019
** event_gestion
** File description:
** gestion of event
*/

#include "../header/structure.h"
#include "../header/game.h"

void detect_music_button(data_t *data)
{
    if (data->right_click == 1 && data->active_music == 0) {
        if (3 <= data->mouse_x && data->mouse_x <= 73 &&
        5 <= data->mouse_y && data->mouse_y <= 78) {
            data->active_music = 1;
            data->music_button.rect.left = 176;
            sfSprite_setTextureRect(data->music_button.sprite,
            data->music_button.rect);
            sfMusic_pause(data->my_music);
        }
    } else if (data->right_click == 1 && data->active_music == 1) {
        if (3 <= data->mouse_x && data->mouse_x <= 73 &&
        5 <= data->mouse_y && data->mouse_y <= 78) {
            data->active_music = 0;
            data->music_button.rect.left = 0;
            sfSprite_setTextureRect(data->music_button.sprite,
            data->music_button.rect);
            sfMusic_play(data->my_music);
        }
    }
}

void detect_restart_button(data_t *data)
{
    if (data->right_click == 1) {
        if (896 <= data->mouse_x && data->mouse_x <= 1022 &&
        496 <= data->mouse_y && data->mouse_y <= 623) {
            destroy_variable(data);
            runner(data);
        }
    }
}

void detect_button(data_t *data)
{
    detect_music_button(data);
    detect_restart_button(data);
}