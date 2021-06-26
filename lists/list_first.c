/*
** EPITECH PROJECT, 2020
** list.c
** File description:
** pushswap
*/

#include "../include/my.h"

static linked_list *create_cell(int element)
{
    linked_list *cell = malloc(sizeof(*cell));

    cell->element = element;
    cell->next = NULL;
    return (cell);
}

linked_list *add_at_first(linked_list *list, int element)
{
    linked_list *cell = create_cell(element);

    if (list == NULL)
        return (cell);
    cell->next = list;
    return (cell);
}

linked_list *add_at(linked_list *list, int element, int pos)
{
    linked_list *prev = list;
    linked_list *cur = list;
    int i = 0;
    linked_list *cell = create_cell(element);

    if (list == NULL)
        return (cell);
    if (pos == 0) {
        cell->next = list;
        return (cell);
    }
    while (i < pos) {
        i++;
        prev = cur;
        cur = cur->next;
    }
    prev->next = cell;
    cell->next = cur;
    return (list);
}

int get_at(linked_list *list, int pos)
{
    int i = 0;

    if (list == NULL) {
        return (1);
    }
    while (i < pos) {
        i++;
        list = list->next;
    }
    return (list->element);
}

int set_at(linked_list *list, int element, int pos)
{
    int i = 0;

    if (list == NULL) {
        return (1);
    }
    while (i < pos) {
        i++;
        list = list->next;
    }
    list->element = element;
}