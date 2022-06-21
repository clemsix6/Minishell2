/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_readline.c
*/

#include "cly_string.h"
#include <unistd.h>

char *cly_readline(int fd)
{
    char *line = NULL;
    char buffer[1];
    int index = 0;

    if (fd == -1)
        return NULL;
    while (line == NULL || line[index - 1] != '\n') {
        int len = read(fd, buffer, 1);
        buffer[len] = 0;
        cly_dyn_strapnd_str(&line, buffer);
        index += len;
    }
    return line;
}
