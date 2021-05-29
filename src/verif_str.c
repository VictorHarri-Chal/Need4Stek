/*
** EPITECH PROJECT, 2021
** check_str.c
** File description:
** check str
*/

#include "n4s.h"

char *verif_str(char *str)
{
    char *tmp = malloc(sizeof(char) * 10000);
    int i = 0;
    int j = 0;

    if (tmp == NULL)
        return (NULL);
    for (int idx = 0; idx < 3;)
        if (str[j++] == ':')
            idx++;
    for (; str[j]; j++)
        if ((str[j] >= '0' && str[j] <= '9') || str[j] == '.' || \
        str[j] == ':') {
            tmp[i] = str[j];
            i++;
        }
    tmp[i] = '\0';
    return (tmp);
}