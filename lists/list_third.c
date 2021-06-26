/*
** EPITECH PROJECT, 2020
** list_third
** File description:
** pushswap
*/

#include "../include/my.h"

linked_list *free_at(linked_list *list, int pos)
{
    linked_list *prev = list;
    linked_list *cur = list;
    int i;

    if (list == NULL)
        return (NULL);
    if (pos == 0) {
        list = list->next;
        free (cur);
        return (list);
    }
    i = 0;
    while (i < pos) {
        i++;
        prev = cur;
        cur = cur->next;
    }
    prev->next = cur->next;
    free (cur);
    return (list);
}

linked_list *free_list(linked_list *list)
{
    linked_list *tmp = NULL;

    while (list != NULL) {
        tmp = list->next;
        free (list);
        list = tmp;
    }
    return (list);
}

void print_list(linked_list *list)
{
    while (list != NULL) {
        my_printf("%d ", list->element);
        list = list->next;
    }
}

linked_list *change_list_a_to_b(linked_list *list, linked_list *list_b)
{
    int first = get_at(list, 0);

    list_b = add_at_first(list_b, first);
    return (list_b);
}