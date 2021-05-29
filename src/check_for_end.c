/*
** EPITECH PROJECT, 2021
** check_for_end.c
** File description:
** check if track is finished
*/

#include "n4s.h"

int check_for_end(char *str)
{
    char *tmp = malloc(sizeof(char) * my_strlen(str) + 1);
    int len = my_strlen(str) - 1;
    int idx = 0;

    for (; str[len] && str[len] != ':'; len--);
    len--;
    for (; str[len] && str[len] != ':'; len--);
    len++;
    while (str[len] && str[len] != ':')
        tmp[idx++] = str[len++];
    tmp[idx] = '\0';
    if (my_strcmp("Track Cleared", tmp) == 0) {
        free(tmp);
        exec_cmd("STOP_SIMULATION\n");
        return (1);
    }
    free(tmp);
    return (0);
}