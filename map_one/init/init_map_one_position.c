/*
** EPITECH PROJECT, 2019
** init_variable
** File description:
** initialize variable
*/

#include "../../header/structure.h"
#include "../../header/map_one.h"

void init_map_one_wall(data_t *data)
{
    data->disp_map_one.s_map_one_wall = sfSprite_create();
    sfSprite_setTexture(data->disp_map_one.s_map_one_wall,
    data->disp_map_one.t_map_one_wall, 0);
}

void init_texture_map_one(data_t *data)
{
    data->disp_map_one.t_map_one_wall = sfTexture_createFromFile(
    "pictures/map_pictures/_PNG/map3/layers/l1_wall.png", NULL);
    data->disp_map_one.t_map_one_la = sfTexture_createFromFile(
    "pictures/map_pictures/_PNG/map3/layers/l2_prop01.png", NULL);
    data->disp_map_one.t_map_one_lb = sfTexture_createFromFile(
    "pictures/map_pictures/_PNG/map3/layers/l3_prop02.png", NULL);
    data->disp_map_one.t_map_one_lc = sfTexture_createFromFile(
    "pictures/map_pictures/_PNG/map3/layers/l4_stones.png", NULL);
    data->disp_map_one.t_map_one_ld = sfTexture_createFromFile(
    "pictures/map_pictures/_PNG/map3/layers/l5_crystals.png", NULL);
    data->disp_map_one.t_map_one_le = sfTexture_createFromFile(
    "pictures/map_pictures/_PNG/map3/layers/l6_ground.png", NULL);
}

void init_sprite_map_one(data_t *data)
{
    init_map_one_wall(data);
    init_map_one_layer_a(data);
    init_map_one_layer_b(data);
    init_map_one_layer_c(data);
    init_map_one_layer_d(data);
    init_map_one_layer_e(data);
}

void init_map_one_position(data_t *data)
{
    init_map_one_la_pos(data);
    init_map_one_lb_pos(data);
    init_map_one_lc_pos(data);
    init_map_one_ld_pos(data);
    init_map_one_le_pos(data);
}