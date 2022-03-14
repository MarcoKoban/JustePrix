/*
** EPITECH PROJECT, 2022
** KOBAN
** File description:
** JustePrix
*/

#include "../include/my.h"

int execution(global_t *a)
{
    my_putstr("Veuillez séléctionner un nombre entre ");
    my_put_nbr(a->nbr_mini); my_putstr(" et "); my_put_nbr(a->nbr_max - 1);
    my_putstr(" : ");
    scanf("%d", &a->reply);
    if (a->reply < a->rdmvalue) {
        if (a->now_round + 1 != a->nbr_round) my_putstr("C'est plus !\n");
    }
    if (a->reply > a->rdmvalue) {
        if (a->now_round + 1 != a->nbr_round) my_putstr("C'est moins !\n");
    }
    if (a->reply == a->rdmvalue) {
        my_putstr("Bravo tu as trouvé le bon nombre !\n");
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
