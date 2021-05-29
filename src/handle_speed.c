/*
** EPITECH PROJECT, 2021
** handle_speed.c
** File description:
** handle speed
*/

#include "n4s.h"

int handle_speed(float val)
{
    float nval = 0.0;

    if (val >= 2000)
        nval = exec_cmd("car_forward:1.0\n");
    else if (val >= 1500)
        nval = exec_cmd("car_forward:0.8\n");
    else if (val >= 1000)
        nval = exec_cmd("car_forward:0.5\n");
    else if (val >= 600)
        nval = exec_cmd("car_forward:0.4\n");
    else if (val >= 400)
        nval = exec_cmd("car_forward:0.2\n");
    else
        nval = exec_cmd("car_forward:0.1\n");
    return (nval);
}

