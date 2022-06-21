/*
** EPITECH PROJECT, 2022
** Minishell2
** File description:
** unset_env.c
*/

#include <stdlib.h>
#include <stdio.h>
#include "minishell.h"
#include "cly_string.h"

void unset_env(char ***env, char *key)
{
    node_t *genesis = NULL;
    node_t *loop_node;
    node_t **list = &genesis;
    char *value;

    parse_env(list, *env);
    loop_node = *list;
    while (loop_node != NULL) {
        value = loop_node->value;
        if (cly_strncmp(value, key, cly_strlen(key)) == 0) {
            cly_node_pop_item(list, value);
            (*env) = unparse_env(list);
            return;
        }
        loop_node = loop_node->next;
    }
}
