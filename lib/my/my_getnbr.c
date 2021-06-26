/*
** EPITECH PROJECT, 2020
** my_getnbr.c
** File description:
** do_op
*/

#include "../../include/bsprintf.h"

int my_getnbr(char *str)
{
    int a = 0;
    int result = 0;
    char sign = -1;

    while (str[a] == '+' || str[a] == '-') {
        if (str[a] == '-')
            sign *= -1;
        a++;
    }
    while (str[a] >= '0' && str[a] <= '9') {
        result = result * 10 - (str[a] - 48);
        a++;
    }
    result = sign * result;
    return (result);
}
