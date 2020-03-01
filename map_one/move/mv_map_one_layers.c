/*
** EPITECH PROJECT, 2019
** mv_map_one_layers
** File description:
** move map one layers
*/

#include "../../header/structure.h"

void mv_map_one_layer_a(data_t *data)
{
    if (data->mv_map_one.pos_map_one_la.x > -1920){
        data->mv_map_one.pos_map_one_la.x -= 0.3;
        data->mv_map_one.pos_map_one_la_next.x  =
        data->mv_map_one.pos_map_one_la.x + 1920;
        sfSprite_setPosition(data->disp_map_one.s_map_one_la,
        data->mv_map_one.pos_map_one_la);
        sfSprite_setPosition(data->disp_map_one.s_map_one_la_next,
        data->mv_map_one.pos_map_one_la_next);
    } else {
        data->mv_map_one.pos_map_one_la.x = 0;
        data->mv_map_one.pos_map_one_la_next.x  =
        data->mv_map_one.pos_map_one_la.x + 1920;
        sfSprite_setPosition(data->disp_map_one.s_map_one_la,
        data->mv_map_one.pos_map_one_la);
        sfSprite_setPosition(data->disp_map_one.s_map_one_la_next,
        data->mv_map_one.pos_map_one_la_next);
    }
}

void mv_map_one_layer_b(data_t *data)
{
    if (data->mv_map_one.pos_map_one_lb.x > -1920){
        data->mv_map_one.pos_map_one_lb.x -= 0.5;
        data->mv_map_one.pos_map_one_lb_next.x  =
        data->mv_map_one.pos_map_one_lb.x + 1920;
        sfSprite_setPosition(data->disp_map_one.s_map_one_lb,
        data->mv_map_one.pos_map_one_lb);
        sfSprite_setPosition(data->disp_map_one.s_map_one_lb_next,
        data->mv_map_one.pos_map_one_lb_next);
    } else {
        data->mv_map_one.pos_map_one_lb.x = 0;
        data->mv_map_one.pos_map_one_lb_next.x  =
        data->mv_map_one.pos_map_one_lb.x + 1920;
        sfSprite_setPosition(data->disp_map_one.s_map_one_lb,
        data->mv_map_one.pos_map_one_lb);
        sfSprite_setPosition(data->disp_map_one.s_map_one_la_next,
        data->mv_map_one.pos_map_one_lb_next);
    }
}

void mv_map_one_layer_c(data_t *data)
{
    if (data->mv_map_one.pos_map_one_lc.x > -1920){
        data->mv_map_one.pos_map_one_lc.x -= 0.7;
        data->mv_map_one.pos_map_one_lc_next.x  =
        data->mv_map_one.pos_map_one_lc.x + 1920;
        sfSprite_setPosition(data->disp_map_one.s_map_one_lc,
        data->mv_map_one.pos_map_one_lc);
        sfSprite_setPosition(data->disp_map_one.s_map_one_lc_next,
        data->mv_map_one.pos_map_one_lc_next);
    } else {
        data->mv_map_one.pos_map_one_lc.x = 0;
        data->mv_map_one.pos_map_one_lc_next.x  =
        data->mv_map_one.pos_map_one_lc.x + 1920;
        sfSprite_setPosition(data->disp_map_one.s_map_one_lc,
        data->mv_map_one.pos_map_one_lc);
        sfSprite_setPosition(data->disp_map_one.s_map_one_lc_next,
        data->mv_map_one.pos_map_one_lc_next);
    }
}

void mv_map_one_layer_d(data_t *data)
{
    if (data->mv_map_one.pos_map_one_ld.x > -1920){
        data->mv_map_one.pos_map_one_ld.x -= 0.7;
        data->mv_map_one.pos_map_one_ld_next.x  =
        data->mv_map_one.pos_map_one_ld.x + 1920;
        sfSprite_setPosition(data->disp_map_one.s_map_one_ld,
        data->mv_map_one.pos_map_one_ld);
        sfSprite_setPosition(data->disp_map_one.s_map_one_ld_next,
        data->mv_map_one.pos_map_one_ld_next);
    } else {
        data->mv_map_one.pos_map_one_ld.x = 0;
        data->mv_map_one.pos_map_one_ld_next.x  =
        data->mv_map_one.pos_map_one_ld.x + 1920;
        sfSprite_setPosition(data->disp_map_one.s_map_one_ld,
        data->mv_map_one.pos_map_one_ld);
        sfSprite_setPosition(data->disp_map_one.s_map_one_ld_next,
        data->mv_map_one.pos_map_one_ld_next);
    }
}

void mv_map_one_layer_e(data_t *data)
{
    if (data->mv_map_one.pos_map_one_le.x > -1920){
        data->mv_map_one.pos_map_one_le.x -= 1.3;
        data->mv_map_one.pos_map_one_le_next.x  =
        data->mv_map_one.pos_map_one_le.x + 1920;
        sfSprite_setPosition(data->disp_map_one.s_map_one_le,
        data->mv_map_one.pos_map_one_le);
        sfSprite_setPosition(data->disp_map_one.s_map_one_le_next,
        data->mv_map_one.pos_map_one_le_next);
    } else {
        data->mv_map_one.pos_map_one_le.x = 0;
        data->mv_map_one.pos_map_one_le_next.x  =
        data->mv_map_one.pos_map_one_le.x + 1920;
        sfSprite_setPosition(data->disp_map_one.s_map_one_le,
        data->mv_map_one.pos_map_one_le);
        sfSprite_setPosition(data->disp_map_one.s_map_one_le_next,
        data->mv_map_one.pos_map_one_le_next);
    }
}