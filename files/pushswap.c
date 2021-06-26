/*
** EPITECH PROJECT, 2020
** pushswap.c
** File description:
** pushswap
*/

#include "../include/my.h"

linked_list *pushswap(linked_list *list, linked_list *list_b)
{
    while (verify_list_order(list) == 1) {
        if (get_at(list, 0) <= get_at(list, 1)) {
            list_b = change_list_a_to_b(list, list_b);
            list = free_at(list, 0);
            print_pb();
        }
        else {
            list = swap_first_to_second(list);
            print_sa(list, list_b); }
    }
    if (len_list(list_b) != 0) {
        while (list_b != NULL) {
        list = change_list_a_to_b(list_b, list);
        list_b = free_at(list_b, 0);
        print_pa(list, list_b);
        }
    }
    if (verify_list_order(list) == 1)
        list = pushswap(list, list_b);
    return (list);
}