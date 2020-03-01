/*
** EPITECH PROJECT, 2019
** header file my
** File description:
** library my
*/

#ifndef MY_H_
#define MY_H_

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <time.h>

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

typedef struct perso_one_s
{
    sfTexture *t_perso_one;
    sfSprite *s_perso_one;
    sfTexture *t_perso_one_jump;
    sfSprite *s_perso_one_jump;
} perso_one_t;

typedef struct perso_one_animation
{
    sfIntRect rect;
    sfIntRect rect_jump;
    sfClock *clock;
    sfTime time;
    int bool_jump;
} perso_one_anim_t;

typedef struct data_s
{
    sfRenderWindow *window;
    disp_map_one_t disp_map_one;
    mv_map_one_t mv_map_one;
    perso_one_t perso_one;
    perso_one_anim_t perso_one_anim;
} data_t;

sfRenderWindow *create_window(void);
void init_variable(data_t *data);
void event_gestion(data_t *data);
void destroy_variable(data_t *data);

void game_instruction(data_t *data);
void display_sprite(data_t *data);

#endif