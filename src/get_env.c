/*
** EPITECH PROJECT, 2022
** Minishell2
** File description:
** get_env.c
*/

#include <stdlib.h>
#include "cly_string.h"
#include "minishell.h"

char *get_value(char *line)
{
    char **details = split(line, "=");

    return details[1];
}

char *get_env_value(char ***env, char *key)
{
    int len = cly_strlen(key);

    for (int i = 0; (*env)[i] != NULL; i++) {
        if (cly_strncmp((*env)[i], key, len) == 0)
            return get_value((*env)[i]);
    }
    return NULL;
}

char *get_env(char ***env, char *key)
{
    int len = cly_strlen(key);

    for (int i = 0; (*env)[i] != NULL; i++) {
        if (cly_strncmp((*env)[i], key, len) == 0)
            return (*env)[i];
    }
    return NULL;
}
