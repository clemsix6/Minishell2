/*
** EPITECH PROJECT, 2022
** Tetris
** File description:
** cly_node_pop_item.c
*/

#include <stdlib.h>
#include "cly_linked_list.h"

node_t *iterate(node_t **node, node_t *it, node_t *last, node_t *ptr)
{
    if (it->value == ptr) {
        if (last == NULL)
            (*node) = it->next;
        else
            last->next = it->next;
        return it;
    }
    return NULL;
}

node_t *cly_node_pop_item(node_t **node, void *ptr)
{
    node_t *last = NULL;
    node_t *it = *node;
    node_t *result = NULL;

    while (it != NULL) {
        result = iterate(node, it, last, ptr);
        if (result != NULL)
            return result;
        last = it;
        it = it->next;
    }
    return NULL;
}
