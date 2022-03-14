/*
** EPITECH PROJECT, 2021
** MY H
** File description:
** Contains all prototypes
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <time.h>

#ifndef MY_H_
    #define MY_H_

typedef struct global_s {
    int rdmvalue;
    int reply;
    int ac;
    char **av;
    int nbr_round;
    int nbr_mini;
    int nbr_max;
    int now_round;
    char *list_char;
    char *reply_char;
} global_t;

/*my_lib*/
void my_putchar(char c);
void my_put_nbr(int nb);
size_t my_strlen(char const *str);
void my_putstr(char const *str);

/*my_lib2*/
int my_chartoint(char str);
int my_strtoint(char *str);
void array_to_2d(char **final_list, char *new_list, int line);
int my_compute_power_rec(int nb, int power);
char *my_inttostr(int num);

/*utils*/
void menu_h();
void ac_0(global_t *a);
void ac_4(global_t *a);

/*error*/
int verification(global_t *a);
int verification_bocule(global_t *a, char *av);
int verification_game(global_t *a);

/*justeprix*/
int execution(global_t *a);
int preparation(global_t *a);

#endif
