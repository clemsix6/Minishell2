/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_node_get.c
*/

#include <stdlib.h>
#include "cly_linked_list.h"

void *cly_node_get(node_t **node, int index)
{
    int count = 0;
    node_t *loop_node = *node;

    if (loop_node == NULL)
        return NULL;
    do {
        if (count == index)
            return loop_node->value;
        loop_node = loop_node->next;
        count++;
    } while (loop_node->next != NULL);
    return NULL;
}
