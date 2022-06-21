/*
** EPITECH PROJECT, 2022
** Minishell2
** File description:
** set_env.c
*/

#include <stdlib.h>
#include <stdio.h>
#include "cly_linked_list.h"
#include "cly_string.h"
#include "minishell.h"

char *get_full_line(char *key, char *value)
{
    int size1 = cly_strlen(key);
    int size2 = cly_strlen(value);
    int size = size1 + size2 + 2;
    char *line = malloc(sizeof(char) * size);

    for (int i = 0; i < size1; i++)
        line[i] = key[i];
    line[size1] = '=';
    for (int i = 0; i < size2; i++)
        line[size1 + i + 1] = value[i];
    line[size] = 0;
    return line;
}

bool set_value(node_t **node, char *key, char *line)
{
    node_t *loop_node = *node;
    char *value;

    while (loop_node != NULL) {
        value = loop_node->value;
        if (cly_strncmp(value, key, cly_strlen(key)) == 0) {
            loop_node->value = line;
            return true;
        }
        loop_node = loop_node->next;
    }
    return false;
}

void set_env(char ***env, char *key, char *value)
{
    node_t *genesis = NULL;
    node_t **list = &genesis;
    char *line = get_full_line(key, value);

    parse_env(list, *env);
    if (!set_value(list, key, line))
        cly_node_push_back(list, line);
    (*env) = unparse_env(list);
}
