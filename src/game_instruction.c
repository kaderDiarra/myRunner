/*
** EPITECH PROJECT, 2019
** game instruction
** File description:
** game instruction
*/

#include "../header/structure.h"
#include "../header/map_one.h"
#include "../header/enemy.h"
#include "../header/perso.h"

void mv_map_one(data_t *data)
{
    mv_map_one_layer_a(data);
    mv_map_one_layer_b(data);
    mv_map_one_layer_c(data);
    mv_map_one_layer_d(data);
    mv_map_one_layer_e(data);
}

void collision_run(data_t *data)
{
    sfVector2f pos_enemy_one = sfSprite_getPosition(data->enemy_one.sprite);
    sfVector2f pos_enemy_two = sfSprite_getPosition(data->enemy_two.sprite);
    sfVector2f pos_enemy_three = sfSprite_getPosition(data->enemy_three.sprite);
    sfVector2f pos_perso = sfSprite_getPosition(data->perso.sprite);

    pos_perso.x += 98;
    pos_perso.y += 196;
    if (pos_enemy_one.x <= pos_perso.x && pos_enemy_one.x + 173 >=
    pos_perso.x - 98 && data->perso.bool_move == 0)
        data->defeat = 1;
    if (pos_enemy_two.x <= pos_perso.x && pos_enemy_two.x + 174 >=
    pos_perso.x - 98 && data->perso.bool_move == 0)
        data->defeat = 1;
    if (pos_enemy_three.x <= pos_perso.x && pos_enemy_three.x + 120 >=
    pos_perso.x - 98 && data->perso.bool_move == 0)
        data->defeat = 1;
}

void collision_jump(data_t *data)
{
    sfVector2f pos_enemy_three = sfSprite_getPosition(data->enemy_three.sprite);
    sfVector2f pos_perso = sfSprite_getPosition(data->perso.s_jump);

    pos_perso.x += 135;
    pos_perso.y += 190;
    if (pos_enemy_three.x <= pos_perso.x && pos_enemy_three.x + 120 >=
    pos_perso.x - 135 && data->perso.bool_move == 0)
        data->defeat = 1;
}

void collision_slide(data_t *data)
{
    sfVector2f pos_enemy_one = sfSprite_getPosition(data->enemy_one.sprite);
    sfVector2f pos_enemy_two = sfSprite_getPosition(data->enemy_two.sprite);
    sfVector2f pos_perso = sfSprite_getPosition(data->perso.s_slide);

    pos_perso.x += 170;
    pos_perso.y += 137;
    if (pos_enemy_one.x <= pos_perso.x && pos_enemy_one.x + 173 >=
    pos_perso.x - 170 && data->perso.bool_move == 2)
        data->defeat = 1;
    if (pos_enemy_two.x <= pos_perso.x && pos_enemy_two.x + 174 >=
    pos_perso.x - 170 && data->perso.bool_move == 2)
        data->defeat = 1;
}

void game_instruction(data_t *data)
{
    if (data->defeat == 0){
        mv_map_one(data);
        move_enemy_one(data);
        move_enemy_two(data);
        move_enemy_three(data);
        move_perso(data);
    }
    if (data->defeat == 1){
        move_defeat(data);
    }
    collision_run(data);
    collision_jump(data);
    collision_slide(data);
}