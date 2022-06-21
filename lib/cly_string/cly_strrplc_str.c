/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_strrplc_str.c
*/

#include "cly_string.h"
#include <stdlib.h>

char *cly_strrplc_str(char *str, char const *old, char const *new)
{
    int old_len;
    char *buffer;

    if (str == NULL || old == NULL || new == NULL)
        return NULL;
    if (cly_strcmp(old, new) == 0)
        return cly_strdup(str);
    buffer = malloc(1);
    buffer[0] = 0;
    old_len = cly_strlen(old) - 1;
    for (int i = 0; str[i] != 0; i++) {
        if (cly_strstr(&(str[i]), old) == &(str[i])) {
            cly_dyn_strapnd_str(&buffer, new);
            i += old_len;
        } else {
            cly_dyn_strapnd_chr(&buffer, str[i]);
        }
    }
    return buffer;
}
