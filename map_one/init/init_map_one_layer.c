/*
** EPITECH PROJECT, 2019
** init_map_one_layer
** File description:
** initialize map one layer
*/

#include "../../header/structure.h"

void init_map_one_layer_a(data_t *data)
{
    data->disp_map_one.s_map_one_la = sfSprite_create();
    data->disp_map_one.s_map_one_la_next = sfSprite_create();
    sfSprite_setTexture(data->disp_map_one.s_map_one_la,
    data->disp_map_one.t_map_one_la, 0);
    sfSprite_setTexture(data->disp_map_one.s_map_one_la_next,
    data->disp_map_one.t_map_one_la, 0);
    sfSprite_setPosition(data->disp_map_one.s_map_one_la,
    data->mv_map_one.pos_map_one_la);
    sfSprite_setPosition(data->disp_map_one.s_map_one_la_next,
    data->mv_map_one.pos_map_one_la_next);
}

void init_map_one_layer_b(data_t *data)
{
    data->disp_map_one.s_map_one_lb = sfSprite_create();
    data->disp_map_one.s_map_one_lb_next = sfSprite_create();
    sfSprite_setTexture(data->disp_map_one.s_map_one_lb,
    data->disp_map_one.t_map_one_lb, 0);
    sfSprite_setTexture(data->disp_map_one.s_map_one_lb_next,
    data->disp_map_one.t_map_one_lb, 0);
}

void init_map_one_layer_c(data_t *data)
{
    data->disp_map_one.s_map_one_lc = sfSprite_create();
    data->disp_map_one.s_map_one_lc_next = sfSprite_create();
    sfSprite_setTexture(data->disp_map_one.s_map_one_lc,
    data->disp_map_one.t_map_one_lc, 0);
    sfSprite_setTexture(data->disp_map_one.s_map_one_lc_next,
    data->disp_map_one.t_map_one_lc, 0);
}

void init_map_one_layer_d(data_t *data)
{
    data->disp_map_one.s_map_one_ld = sfSprite_create();
    data->disp_map_one.s_map_one_ld_next = sfSprite_create();
    sfSprite_setTexture(data->disp_map_one.s_map_one_ld,
    data->disp_map_one.t_map_one_ld, 0);
    sfSprite_setTexture(data->disp_map_one.s_map_one_ld_next,
    data->disp_map_one.t_map_one_ld, 0);
}

void init_map_one_layer_e(data_t *data)
{
    data->disp_map_one.s_map_one_le = sfSprite_create();
    data->disp_map_one.s_map_one_le_next = sfSprite_create();
    sfSprite_setTexture(data->disp_map_one.s_map_one_le,
    data->disp_map_one.t_map_one_le, 0);
    sfSprite_setTexture(data->disp_map_one.s_map_one_le_next,
    data->disp_map_one.t_map_one_le, 0);
}