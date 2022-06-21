/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_str_split.c
*/

#include "cly_linked_list.h"
#include "cly_string.h"
#include <stdlib.h>

void append_list(char *string, node_t **list)
{
    if (string == NULL)
        return;
    cly_dyn_strapnd_chr(&string, 0);
    cly_node_push_back(list, string);
}

char **to_array(node_t **list)
{
    int count = cly_node_count(list);
    node_t *loop_node = (*list);
    char **array;

    if (count == -1)
        return NULL;
    array = malloc(sizeof(char *) * (count + 1));
    for (int i = 0; loop_node != NULL; i++) {
        array[i] = (char *) loop_node->value;
        loop_node = loop_node->next;
    }
    cly_node_destroy(list, true);
    return array;
}

char **cly_str_split(const char *str, char separator)
{
    node_t *null_node = NULL;
    node_t **list = &null_node;
    char *string = NULL;

    if (str == NULL)
        return NULL;
    for (int i = 0; str[i] != '\n'; i++) {
        if (str[i] == separator) {
            append_list(string, list);
            string = NULL;
            continue;
        }
        cly_dyn_strapnd_chr(&string, str[i]);
    }
    append_list(string, list);
    return to_array(list);
}
