/*
** EPITECH PROJECT, 2022
** Minishell2
** File description:
** split.c
*/

#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_separator(char c, const char *separator)
{
    for (int i = 0; separator[i] != 0; i++) {
        if (c == separator[i])
            return true;
    }
    return false;
}

int get_split_length(char *cmd, const char *separator)
{
    int count = 0;

    for (int i = 0; cmd[i] != 0; i++) {
        if (is_separator(cmd[i], separator) &&\
        !is_separator(cmd[i + 1], separator))
            count ++;
    }
    return count + 1;
}

char **split(char *cmd, const char *separator)
{
    int count = get_split_length(cmd, separator);
    char **result;
    char *part;
    int index = 0;

    if (count <= 0)
        return NULL;
    result = malloc((count + 1) * sizeof(char *));
    part = strtok(cmd, separator);
    while (part != NULL) {
        result[index++] = part;
        part = strtok(NULL, separator);
    }
    result[index] = NULL;
    return result;
}
