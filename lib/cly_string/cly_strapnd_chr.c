/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_strapnd_chr.c
*/

#include "cly_string.h"
#include <stdlib.h>

char *cly_strapnd_chr(char *str, char c)
{
    char *tmp;
    int len = 0;

    if (str == NULL) {
        tmp = malloc(2);
    } else {
        len = cly_strlen(str);
        tmp = malloc(len + 1);
        if (cly_strncpy(tmp, str, len) == -1) {
            free(tmp);
            return NULL;
        }
    }
    tmp[len] = c;
    tmp[len + 1] = 0;
    return tmp;
}
