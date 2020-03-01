/*
** EPITECH PROJECT, 2019
** destroy_variable
** File description:
** destroy window, sprite and texture
*/

#include "../header/structure.h"

void destroy_perso(data_t *data)
{
    sfSprite_destroy(data->perso.sprite);
    sfSprite_destroy(data->perso.s_jump);
    sfSprite_destroy(data->perso.s_slide);
    sfSprite_destroy(data->perso_defeat.sprite_lose_msg);
    sfTexture_destroy(data->perso.t_jump);
    sfTexture_destroy(data->perso.t_slide);
    sfTexture_destroy(data->perso.texture);
    sfTexture_destroy(data->perso_defeat.texture);
    sfClock_destroy(data->perso.clock);
    sfSprite_destroy(data->perso_defeat.sprite);
    sfSprite_destroy(data->music_button.sprite);
}

void destroy_variable(data_t *data)
{
    sfTexture_destroy(data->disp_map_one.t_map_one_la);
    sfTexture_destroy(data->disp_map_one.t_map_one_lb);
    sfTexture_destroy(data->disp_map_one.t_map_one_lc);
    sfTexture_destroy(data->disp_map_one.t_map_one_ld);
    sfTexture_destroy(data->disp_map_one.t_map_one_le);
    sfTexture_destroy(data->disp_map_one.t_map_one_wall);
    sfTexture_destroy(data->perso_defeat.texture_lose_msg);
    sfTexture_destroy(data->music_button.texture);
    sfMusic_destroy(data->my_music);
    destroy_perso(data);
}
