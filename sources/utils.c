/*
** EPITECH PROJECT, 2022
** KOBAN
** File description:
** utils justeprix
*/

#include "../include/my.h"

void menu_h(void)
{
    my_putstr("CREATOR\n    Marc-Olivier KOBAN\n\n");
    my_putstr("UTILIZATION\n    ");
    my_putstr("./justeprix = 7 round, number into 0 and 100\n");
    my_putstr("    ./justeprix x y z\n");
    my_putstr("    x = number round\n");
    my_putstr("    y = number minimal\n");
    my_putstr("    z = number maximal\n\n");
    my_putstr("EXEMPLE\n");
    my_putstr("    ./justeprix 10 50 200\n");
}

void ac_0(global_t *a)
{
    a->nbr_round = 7;
    a->nbr_mini = 0;
    a->nbr_max = 101;
    a->rdmvalue = rand() % a->nbr_max;
    for (int x = 0; x < 10; x++) {
        execution(a);
    }
}

void ac_4(global_t *a)
{
    a->nbr_round = my_strtoint(a->av[1]);
    a->nbr_mini = my_strtoint(a->av[2]);
    a->nbr_max = my_strtoint(a->av[3]) + 1;
    a->rdmvalue = a->nbr_mini + rand() % (a->nbr_max - a->nbr_mini);
    for (a->now_round; a->now_round != a->nbr_round; a->now_round ++) {
        execution(a);
    }
    my_putstr("Défaite !\nLe résultat était : ");
    my_put_nbr(a->rdmvalue); my_putstr(" !");
}
