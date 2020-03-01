/*
** EPITECH PROJECT, 2019
** header file my
** File description:
** library my
*/

#ifndef MY_MAP_ONE_H_
#define MY_MAP_ONE_H_

#include "structure.h"

void init_map_one_wall(data_t *data);
void init_map_one_layer_a(data_t *data);
void init_map_one_layer_b(data_t *data);
void init_map_one_layer_c(data_t *data);
void init_map_one_layer_d(data_t *data);
void init_map_one_layer_e(data_t *data);

void init_sprite_map_one(data_t *data);
void init_texture_map_one(data_t *data);

void init_map_one_position(data_t *data);
void init_map_one_la_pos(data_t *data);
void init_map_one_lb_pos(data_t *data);
void init_map_one_lc_pos(data_t *data);
void init_map_one_ld_pos(data_t *data);
void init_map_one_le_pos(data_t *data);

void mv_map_one(data_t *data);
void mv_map_one_layer_a(data_t *data);
void mv_map_one_layer_b(data_t *data);
void mv_map_one_layer_c(data_t *data);
void mv_map_one_layer_d(data_t *data);
void mv_map_one_layer_e(data_t *data);

void display_map_one(data_t *data);

#endif