/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_strtok.c
*/

#include <stdlib.h>
#include <stdbool.h>

bool is_separator(char c, char *separators)
{
    for (int i = 0; separators[i] != 0; i++) {
        if (c == separators[i])
            return true;
    }
    return false;
}

char *cly_strtok(char *str, char *separators)
{
    for (int i = 0; str[i] != 0; i++) {
        if (is_separator(str[i], separators))
            return &(str[i]);
    }
    return NULL;
}
