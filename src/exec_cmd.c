/*
** EPITECH PROJECT, 2021
** exec_cmd.c
** File description:
** exec_cmd
*/

#include "n4s.h"

int exec_cmd(char *str)
{
    char *buff = NULL;
    size_t len = 0;
    int ret = 0;

    my_printf("%s", str);
    ret = getline(&buff, &len, stdin);
    if (ret == -1)
        return (0);
    buff[ret - 1] = '\0';
    if (check_for_end(buff) == 1)
        return (1);
    return (0);
}