/*
** EPITECH PROJECT, 2020
** list.h
** File description:
** pushswap
*/

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "bsprintf.h"
#ifndef lists
#define lists

typedef struct list_t
{
    int element;
    struct list_t *next;
}linked_list;

int my_strlen(char const *str);
int main(int ac, char **av);
linked_list *empty_list(void);
int is_empty_list(linked_list *list);
linked_list *swap_first_to_second(linked_list *list);
int len_list(linked_list *list);
int verify_list_order(linked_list *list);
linked_list *add_at_first(linked_list *list, int element);
linked_list *add_at(linked_list *list, int element, int pos);
int get_at(linked_list *list, int pos);
int set_at(linked_list *list, int element, int pos);
linked_list*free_at(linked_list *list, int pos);
linked_list *free_list(linked_list *list);
void print_list(linked_list *list);
linked_list *pushswap(linked_list *list, linked_list *list_b);
linked_list *change_list_a_to_b(linked_list *list, linked_list *list_b);
void function_pushswap(linked_list *list, linked_list *list_b);
void print_sa(linked_list *list, linked_list *list_b);
void print_pa(linked_list *list, linked_list *list_b);
void print_pb(void);

#endif /* !lists.h */
