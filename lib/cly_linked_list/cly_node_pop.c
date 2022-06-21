/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_node_pop.c
*/

#include "cly_linked_list.h"
#include <stdlib.h>

node_t *cly_node_pop(node_t **node, void *ptr)
{
    node_t *loop_node = *node;
    node_t *last_node = *node;

    if (loop_node == NULL)
        return NULL;
    if (loop_node->next == NULL) {
        (*node) = NULL;
        return loop_node;
    }
    while (loop_node->next != NULL) {
        last_node = loop_node;
        loop_node = loop_node->next;
        if (ptr == loop_node->value) {
            last_node->next = loop_node->next;

        }
    }
    last_node->next = NULL;
    return loop_node;
}
