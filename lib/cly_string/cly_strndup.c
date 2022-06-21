/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_strndup.c
*/

#include "cly_string.h"
#include <stdlib.h>

char *cly_strndup(char const *src, int n)
{
    int len;
    char *dest;

    if (src == NULL)
        return NULL;
    len = cly_strlen(src);
    if (n > len)
        n = len;
    dest = malloc(n + 1);
    cly_strncpy(dest, src, n);
    dest[n] = 0;
    return dest;
}
