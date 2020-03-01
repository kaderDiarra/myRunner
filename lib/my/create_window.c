/*
** EPITECH PROJECT, 2019
** create_window
** File description:
** create a window
*/

#include "../../header/structure.h"

sfRenderWindow *create_window(void)
{
    sfRenderWindow *window;
    sfVideoMode video_mode;

    video_mode.width = 1920;
    video_mode.height = 1080;
    video_mode.bitsPerPixel = 32;
    window = sfRenderWindow_create(video_mode,
    "My_Hunter", sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(window, 80);
    return (window);
}