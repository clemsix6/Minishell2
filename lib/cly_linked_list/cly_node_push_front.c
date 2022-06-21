/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_node_push_front.c
*/

#include <stdlib.h>
#include "cly_linked_list.h"

int cly_node_push_front(node_t **node, void * value)
{
    node_t *new_node;

    new_node = malloc(sizeof(node_t));
    new_node->value = value;
    new_node->next = (*node);
    *node = new_node;
    return 0;
}
