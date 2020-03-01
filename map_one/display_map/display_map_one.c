/*
** EPITECH PROJECT, 2019
** display_map_one
** File description:
** display map one
*/

#include "../../header/structure.h"

void display_map_one_next(data_t *data)
{
    sfRenderWindow_drawSprite(
    data->window, data->disp_map_one.s_map_one_ld, NULL);
    sfRenderWindow_drawSprite(
    data->window, data->disp_map_one.s_map_one_ld_next, NULL);
    sfRenderWindow_drawSprite(
    data->window, data->disp_map_one.s_map_one_le, NULL);
    sfRenderWindow_drawSprite(
    data->window, data->disp_map_one.s_map_one_le_next, NULL);
}

void display_map_one(data_t *data)
{
    sfRenderWindow_drawSprite(
    data->window, data->disp_map_one.s_map_one_wall, NULL);
    sfRenderWindow_drawSprite(
    data->window, data->disp_map_one.s_map_one_la, NULL);
    sfRenderWindow_drawSprite(
    data->window, data->disp_map_one.s_map_one_la_next, NULL);
    sfRenderWindow_drawSprite(
    data->window, data->disp_map_one.s_map_one_lb, NULL);
    sfRenderWindow_drawSprite(
    data->window, data->disp_map_one.s_map_one_lb_next, NULL);
    sfRenderWindow_drawSprite(
    data->window, data->disp_map_one.s_map_one_lc, NULL);
    sfRenderWindow_drawSprite(
    data->window, data->disp_map_one.s_map_one_lc_next, NULL);
    display_map_one_next(data);
}