/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_node_pop_back.c
*/

#include <stdlib.h>
#include "cly_linked_list.h"

node_t *cly_node_pop_back(node_t **node)
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
    }
    last_node->next = NULL;
    return loop_node;
}
