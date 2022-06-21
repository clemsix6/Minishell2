/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_node_count.c
*/

#include <stdlib.h>
#include <stdio.h>
#include "cly_linked_list.h"

int cly_node_count(node_t **node)
{
    int count = 1;
    node_t *loop_node = *node;

    if (loop_node == NULL)
        return 0;
    while (loop_node->next != NULL) {
        loop_node = loop_node->next;
        count++;
    }
    return count;
}
