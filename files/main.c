/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** pushswap
*/

#include "../include/my.h"

int main(int ac, char **av)
{
    int i = 1;
    int number;

    if (ac < 2)
        return (84);
    else {
        linked_list *list_a = empty_list();
        linked_list *list_b = empty_list();
        while (av[i] != NULL) {
            number = my_getnbr(av[i]);
            list_a = add_at(list_a, number, i - 1);
            i++;
        }
        list_a = pushswap(list_a, list_b);
        my_printf("\n");
        free_list(list_a);
    }
    return (0);
}