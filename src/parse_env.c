/*
** EPITECH PROJECT, 2022
** Minishell2
** File description:
** parse_env.c
*/

#include <stdlib.h>
#include "cly_linked_list.h"

void parse_env(node_t **list, char **env)
{
    for (int i = 0; env[i] != NULL; i++) {
        cly_node_push_back(list, env[i]);
    }
}

char **unparse_env(node_t **list)
{
    node_t *loop_node = *list;
    char **env = malloc(sizeof(char *) * (cly_node_count(list) + 1));
    int index = 0;

    while (loop_node != NULL) {
        env[index++] = loop_node->value;
        loop_node = loop_node->next;
    }
    env[index] = NULL;
    return env;
}
