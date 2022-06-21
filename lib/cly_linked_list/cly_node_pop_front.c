/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_node_pop_front.c
*/

#include <stdlib.h>
#include "cly_linked_list.h"

node_t *cly_node_pop_front(node_t **node)
{
    node_t *first_node = *node;

    if (first_node == NULL)
        return NULL;
    (*node) = first_node->next;
    first_node->next = NULL;
    return first_node;
}
