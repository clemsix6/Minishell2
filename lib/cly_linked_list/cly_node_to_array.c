/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_node_to_array.c
*/

#include "cly_linked_list.h"
#include <stdlib.h>

void *cly_node_to_array(node_t **list)
{
    node_t *loop_node = (*list);
    int count = cly_node_count(list);
    void **buffer;
    int i = 0;

    if (count <= 0)
        return NULL;
    buffer = malloc(count * sizeof(void *));
    while (loop_node != NULL) {
        buffer[i] = loop_node->value;
        loop_node = loop_node->next;
    }
    return buffer;
}
