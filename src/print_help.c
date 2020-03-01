/*
** EPITECH PROJECT, 2019
** print_help
** File description:
** print_help
*/

#include "../header/game.h"

void usage(void)
{
    my_putstr("USAGE\n");
    my_putstr("     ./my_runner\n");
    my_putstr("DESCRIPTION:\n");
    my_putstr("     Key up    : player jump\n");
    my_putstr("     Key down  : player slide\n");
    my_putstr("     SPACE BAR : replay game\n");
}

int print_help(int ac, char **av)
{
    if (ac == 1){
        return (1);
    }
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h'
    && my_strlen(av[1]) == 2){
        usage();
        return (0);
    }
    return (0);
}