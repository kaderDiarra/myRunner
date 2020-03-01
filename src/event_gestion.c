/*
** EPITECH PROJECT, 2019
** event_gestion
** File description:
** gestion of event
*/

#include "../header/structure.h"
#include "../header/perso.h"
#include "../header/game.h"

static void move_key(data_t *data)
{
    if (sfKeyboard_isKeyPressed(sfKeyUp)){
        data->perso.bool_move = 1;
        data->perso.is_jumping = 1;
        data->perso.active_run = 1;
    }
    if (sfKeyboard_isKeyPressed(sfKeyDown) && data->perso.is_jumping == 0){
        data->perso.bool_move = 2;
        data->perso.active_run = 1;
        data->perso.can_jump = 0;
        data->perso.is_jumping = 0;
    } else if (data->perso.is_jumping == 0)
        data->perso.bool_move = 0;
}

void event_gestion(data_t *data)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(data->window, &event)){
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(data->window);
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(
        data->clock_click)) >= 200) {
            if (sfMouse_isButtonPressed(sfMouseLeft)) {
                data->mouse_x = event.mouseButton.x;
                data->mouse_y = event.mouseButton.y;
                data->right_click = 1;
                detect_button(data);
            } else
                data->right_click = 0;
            sfClock_restart(data->clock_click);
        }
        move_key(data);
    }
}
