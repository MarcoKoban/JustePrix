/*
** EPITECH PROJECT, 2022
** KOBAN
** File description:
** JustePrix
*/

#include "../include/my.h"

int execution(global_t *a)
{
    my_putstr("Choose a number into ");
    my_put_nbr(a->nbr_mini); my_putstr(" and "); my_put_nbr(a->nbr_max - 1);
    my_putstr(" : ");
    a->reply_char = malloc(10 * sizeof(a->reply_char));
    scanf("%s", a->reply_char);
    a->reply = my_strtoint(a->reply_char);
    verification_game(a);
    if (a->reply < a->rdmvalue) {
        if (a->now_round + 1 != a->nbr_round) my_putstr("It's More !\n");
    }
    if (a->reply > a->rdmvalue) {
        if (a->now_round + 1 != a->nbr_round) my_putstr("It's Less\n");
    }
    if (a->reply == a->rdmvalue) {
        my_putstr("Congratulations you are find the right number !\n");
        exit (0);
    }
}

int preparation(global_t *a)
{
    srand(time(NULL));
    if (a->ac == 4 || a->ac == 1) {
        if (a->ac == 1) ac_0(a);
        if (a->ac == 4) {
            if (verification(a) == 84) return 84;
            ac_4(a); return 0;
        }
    } else {
        return 84;
    }
}

int main(int ac, char *av[])
{
    global_t *a = malloc(sizeof(global_t));
    a->ac = ac;
    a->av = av;
    if (ac == 2) {
        if (av[1][0] == '-' && av[1][1] == 'h') menu_h(); return 0;
    }
    return (preparation(a));
}
