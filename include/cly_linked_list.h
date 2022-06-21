/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_linked_list.h
*/

#ifndef CLY_CLY_LINKED_LIST_H
#define CLY_CLY_LINKED_LIST_H

#include <stdbool.h>

typedef struct node_s node_t;

struct node_s {
    void *value;
    node_t *next;
};

int cly_node_push_back(node_t **node, void *value);
node_t *cly_node_pop_back(node_t **node);
int cly_node_push_front(node_t **node, void * value);
node_t *cly_node_pop_front(node_t **node);
int cly_node_count(node_t **node);
int cly_node_destroy(node_t **node, bool destroy_child);
void *cly_node_to_array(node_t **list);
void *cly_node_get(node_t **node, int index);
void print_node(node_t **node);
node_t *cly_node_pop_item(node_t **node, void *ptr);

#endif //CLY_CLY_LINKED_LIST_H
