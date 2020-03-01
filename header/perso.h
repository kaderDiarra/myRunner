/*
** EPITECH PROJECT, 2019
** header file my
** File description:
** library my
*/

#ifndef PERSO_H_
#define PERSO_H_

#include "structure.h"

    void disp_perso(data_t *data);
    void init_perso(data_t *data);
    void animation_perso(data_t *data);
    void move_perso(data_t *data);

    void disp_defeat(data_t *data);
    void init_perso_defeat(data_t *data);
    void animation_defeat(data_t *data);
    void move_defeat(data_t *data);

    void run_one(data_t *data);
    void run_two(data_t *data);
    void run_three(data_t *data);
    void run_four(data_t *data);
    void run_five(data_t *data);

    void runner(data_t *data);

#endif