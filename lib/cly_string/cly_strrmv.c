/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_strrmv.c
*/

#include "cly_string.h"
#include <stdlib.h>

char *cly_strrmv(char *str, int index, int count)
{
    int len;
    int end_index = index + count;
    char *copy = NULL;

    if (str == NULL)
        return NULL;
    len = cly_strlen(str);
    if (index >= len)
        return cly_strdup("");
    cly_dyn_strnapnd_str(&copy, str, index);
    if (end_index < len)
        cly_dyn_strapnd_str(&copy, str + end_index);
    return copy;
}
