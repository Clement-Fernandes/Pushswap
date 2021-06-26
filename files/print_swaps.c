/*
** EPITECH PROJECT, 2020
** print_swaps
** File description:
** pushswap
*/

#include "../include/my.h"

void print_pb(void)
{
    my_printf("pb");
    my_putchar(' ');
}

void print_sa(linked_list *list, linked_list *list_b)
{
    my_printf("sa");
    if (!(len_list(list_b) == 0 && verify_list_order(list) != 1))
        my_putchar(' ');
}

void print_pa(linked_list *list, linked_list *list_b)
{
    my_printf("pa");
    if (!(len_list(list_b) == 0 && verify_list_order(list) != 1))
        my_putchar(' ');
}