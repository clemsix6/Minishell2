/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_node_push_back.c
*/

#include <stdlib.h>
#include "cly_linked_list.h"

int cly_node_push_back(node_t **node, void *value)
{
    node_t *loop_node = *node;
    node_t *new_node;

    new_node = malloc(sizeof(node_t));
    new_node->value = value;
    new_node->next = NULL;
    if (*node == NULL) {
        (*node) = new_node;
        return 0;
    }
    while (loop_node->next != NULL)
        loop_node = loop_node->next;
    loop_node->next = new_node;
    return 0;
}
