/*
** EPITECH PROJECT, 2020
** my_strlen.c
** File description:
** bspushswap
*/

#include "../../include/bsprintf.h"

int my_strlen(char const *str)
{
    int e = 0;
    while (str[e] != '\0'){
        e++;
    }
    return (e);

}