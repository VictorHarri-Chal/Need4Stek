/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "n4s.h"

int ia(void)
{
    char *buff = NULL;
    char **tab = NULL;
    size_t len = 0;

    while (1) {
        my_putstr("GET_INFO_LIDAR\n");
        getline(&buff, &len, stdin);
        check_for_end(buff);
        buff = verif_str(buff);
        tab = my_edited_word_array(buff, ':');
        if (handle_speed(atof(tab[15])) == 1)
            break;
        if (handle_direction(tab, atof(tab[15])) == 1)
            break;
    }
    exec_cmd("STOP_SIMULATION\n");
    return (0);
}

int main(void)
{
    exec_cmd("START_SIMULATION\n");
    ia();
    return (0);
}