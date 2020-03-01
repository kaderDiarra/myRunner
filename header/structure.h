/*
** EPITECH PROJECT, 2019
** header file my
** File description:
** library my
*/

#ifndef STRUCTURE_H_
#define STRUCTURE_H_

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <time.h>
#include <SFML/Audio.h>
#include <stdlib.h>

typedef struct disp_map_one_s
{
    sfTexture *t_map_one_wall;
    sfSprite *s_map_one_wall;
    sfTexture *t_map_one_la;
    sfSprite *s_map_one_la;
    sfSprite *s_map_one_la_next;
    sfTexture *t_map_one_lb;
    sfSprite *s_map_one_lb;
    sfSprite *s_map_one_lb_next;
    sfTexture *t_map_one_lc;
    sfSprite *s_map_one_lc;
    sfSprite *s_map_one_lc_next;
    sfTexture *t_map_one_ld;
    sfSprite *s_map_one_ld;
    sfSprite *s_map_one_ld_next;
    sfTexture *t_map_one_le;
    sfSprite *s_map_one_le;
    sfSprite *s_map_one_le_next;
} disp_map_one_t;

typedef struct mv_map_one_s
{
    sfVector2f pos_map_one_la;
    sfVector2f pos_map_one_la_next;
    sfVector2f pos_map_one_lb;
    sfVector2f pos_map_one_lb_next;
    sfVector2f pos_map_one_lc;
    sfVector2f pos_map_one_lc_next;
    sfVector2f pos_map_one_ld;
    sfVector2f pos_map_one_ld_next;
    sfVector2f pos_map_one_le;
    sfVector2f pos_map_one_le_next;
} mv_map_one_t;

typedef struct enemy_one_s
{
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
    sfVector2f pos;
} enemy_one_t;

typedef struct enemy_two_s
{
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
} enemy_two_t;

typedef struct enemy_three_s
{
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
    sfClock *clock;
    sfTime times;
} enemy_three_t;

typedef struct perso_s
{
    sfTexture *texture;
    sfTexture *t_jump;
    sfTexture *t_slide;
    sfSprite *s_jump;
    sfSprite *sprite;
    sfSprite *s_slide;
    sfIntRect rect;
    sfIntRect rect_jump;
    sfClock *clock;
    sfClock *clock_jump;
    sfTime times_jump;
    sfTime times;
    int bool_move;
    int is_jumping;
    int bool_jump;
    int active_run;
    int can_jump;
} perso_t;

typedef struct defeat_s
{
    sfTexture *texture;
    sfTexture *texture_lose_msg;
    sfSprite *sprite;
    sfSprite *sprite_lose_msg;
    sfIntRect rect;
    sfClock *clock;
    sfTime times;
    int active_defeat_msg;
} defeat_t;

typedef struct data_s
{
    sfRenderWindow *window;
    disp_map_one_t disp_map_one;
    mv_map_one_t mv_map_one;
    enemy_one_t enemy_one;
    enemy_two_t enemy_two;
    enemy_three_t enemy_three;
    perso_t perso;
    defeat_t perso_defeat;
    sfMusic *my_music;
    enemy_one_t music_button;
    enemy_one_t restart_button;
    sfClock *clock_click;
    float enemy_speed;
    int defeat;
    int right_click;
    int active_music;
    float mouse_x;
    float mouse_y;
} data_t;

#endif
