/*
** EPITECH PROJECT, 2022
** KOBAN
** File description:
** error justeprix
*/

#include "../include/my.h"

int verification(global_t *a)
{
    a->list_char = "0123456789";
    int count = 0;
    count = verification_bocule(a, a->av[1]);
    if (my_strtoint(a->av[2]) > my_strtoint(a->av[3])) return 84;
    if (count != my_strlen(a->av[1])) return 84;
    count = verification_bocule(a, a->av[2]);
    if (count != my_strlen(a->av[2])) return 84;
    count = verification_bocule(a, a->av[3]);
    if (count != my_strlen(a->av[3])) return 84;
    return 0;

}

int verification_bocule(global_t *a, char *av)
{
    int count = 0;
    for (int x = 0; x < my_strlen(av); x++) {
        for (int y = 0; y < my_strlen(a->list_char); y++) {
            (av[x] == a->list_char[y]) ? count++ : 0;
        }
    }
    return count;
}

int verification_game(global_t *a)
{
    for (int x = 0; x < my_strlen(a->reply_char); x++) {
        if (a->reply_char[x] > 57 || a->reply_char[x] < 48) {
            my_putstr("Bad character, plz choose a number : ");
            scanf("%s", a->reply_char);
            a->reply = my_strtoint(a->reply_char); x = 0;
        }
        if (a->reply < my_strtoint(a->av[2])) {
            my_putstr("The number is too small, plz choose a number >= ");
            my_putstr(a->av[2]); my_putstr(" : "); scanf("%s", a->reply_char);
            a->reply = my_strtoint(a->reply_char); x = 0;
        }
        if (a->reply > my_strtoint(a->av[3])) {
            my_putstr("The number is too big, plz choose a number <= ");
            my_putstr(a->av[3]); my_putstr(" : "); scanf("%s", a->reply_char);
            a->reply = my_strtoint(a->reply_char); x = 0;
        }
    }
    return 0;
}
