/*
** EPITECH PROJECT, 2021
** n4s.h
** File description:
** n4s header
*/

#ifndef N4S_H_
#define N4S_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "my.h"

int check_for_end(char *str);
int handle_speed(float val);
int handle_direction(char **tab, float val);
int do_speed(void);
int exec_cmd(char *str);
int do_direction(void);
int exec_direction(char *val, float num);
char *verif_str(char *str);
char **my_edited_word_array(char *str, char sep);

#endif /* !N4S_H_ */
