/*
** EPITECH PROJECT, 2022
** Minishell2
** File description:
** get_line.c
*/

#include <stdlib.h>
#include <stdio.h>
#include "cly_string.h"

int get_total_len(char **command, int start, int end)
{
    int len = 0;

    for (int i = start; i < end; i++)
        len += cly_strlen(command[i]) + 1;
    return len;
}

char *get_line(char **command, int start, int end)
{
    int len = get_total_len(command, start, end);
    char *line = malloc(sizeof(char) * len);
    int index = 0;

    for (int i = start; i < end; i++) {
        for (int j = 0; command[i][j] != 0; j++)
            line[index++] = command[i][j];
        line[index++] = ' ';
    }
    line[index - 1] = 0;
    return line;
}
