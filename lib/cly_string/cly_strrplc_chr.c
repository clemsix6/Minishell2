/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_strrplc_char.c
*/

#include "cly_string.h"
#include <stdlib.h>

char *cly_strrplc_chr(char *str, char old, char new)
{
    int len = cly_strlen(str);
    int count = 0;
    char *dup;

    if (len == -1)
        return NULL;
    dup = cly_strdup(str);
    for (int i = 0; dup[i] != 0; i++) {
        if (dup[i] == old) {
            dup[i] = new;
            count++;
        }
    }
    return dup;
}
