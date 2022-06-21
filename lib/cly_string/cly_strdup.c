/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_strdup.c
*/

#include "cly_string.h"
#include <stdlib.h>

char *cly_strdup(char const *src)
{
    int len;
    char *dest;

    if (src == NULL)
        return NULL;
    len = cly_strlen(src);
    dest = malloc(len + 1);
    cly_strncpy(dest, src, len);
    dest[len] = 0;
    return dest;
}
