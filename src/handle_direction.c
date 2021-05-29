/*
** EPITECH PROJECT, 2021
** handle_direction.c
** File description:
** handle direction
*/

#include "n4s.h"

int exec_direction(char *val, float num)
{
    char *buff = NULL;
    size_t len = 0;
    int ret = 0;

    my_putstr("wheels_dir:");
    if (num < 0.0)
        my_putchar('-');
    my_printf("%s\n", val);
    ret = getline(&buff, &len, stdin);
    if (ret == -1)
        return (0);
    if (check_for_end(buff) == 1)
        return (1);
    return (0);
}

int handle_direction(char **tab, float val)
{
    float left = atof(tab[1]);
    float right = atof(tab[31]);
    float ret = left - right;
    int ret2 = 0;

    if (val >= 1500)
        ret2 = exec_direction("0.005", ret);
    else if (val >= 1000)
        ret2 = exec_direction("0.05", ret);
    else if (val >= 600)
        ret2 = exec_direction("0.1", ret);
    else if (val >= 400)
        ret2 = exec_direction("0.2", ret);
    else if (val >= 200)
        ret2 = exec_direction("0.3", ret);
    else
        ret2 = exec_direction("0.5", ret);
    return (ret2);
}