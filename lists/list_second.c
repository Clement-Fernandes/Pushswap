/*
** EPITECH PROJECT, 2020
** list_two
** File description:
** pushswap
*/

#include "../include/my.h"

linked_list *empty_list(void)
{
    return (NULL);
}

int is_empty_list(linked_list *list)
{
    if (list == NULL)
        return (0);
    else
        return (1);
}

linked_list *swap_first_to_second(linked_list *list)
{
    int n = get_at(list, 1);

    list = add_at_first(list, n);
    free_at(list, 2);
    return (list);
}

int len_list(linked_list *list)
{
    int len = 0;

    while (list) {
        len++;
        list = list->next;
    }
    return (len);
}

int verify_list_order(linked_list *list)
{
    int i = 0;
    int len = len_list(list);

    while (i != len - 1) {
        int a = get_at(list, i);
        int b = get_at(list, i + 1);
        if (a <= b)
            i++;
        if (a > b)
            return (1);
    }
    return (0);
}