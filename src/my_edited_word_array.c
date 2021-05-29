/*
** EPITECH PROJECT, 2021
** my_edited_word_array.c
** File description:
** my str to word array with separator
*/

#include "n4s.h"

char **my_edited_word_array(char *str, char sep)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char **tab = NULL;
    tab = malloc(sizeof(char *) * my_strlen(str) + 1);

    while (str[i]) {
        k = 0;
        tab[j] = malloc(sizeof(char) * my_strlen(str) + 1);
        for (; str[i] == sep && str[i++];);
        for (; str[i] != sep && str[i]; i++, k++)
            tab[j][k] = str[i];
        tab[j++][k] = '\0';
    }
    tab[j] = NULL;
    return (tab);
}