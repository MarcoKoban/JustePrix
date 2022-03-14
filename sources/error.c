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
            if (av[x] == a->list_char[y]) count++;
        }
    }
    return count;
}

int verification_game(global_t *a)
{
    char *test = my_inttostr(a->reply);
    int count = 0;
    count = verification_bocule(a, test);
    if (count != my_strlen(test)) return 84;
    return 0;
}