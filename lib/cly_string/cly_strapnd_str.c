/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_append_string.c
*/

#include "cly_string.h"
#include <stdlib.h>

char *cly_strapnd_str(char *str, char const *part)
{
    char *tmp;
    int str_len;
    int part_len;

    if (part == NULL)
        return cly_strdup(str);
    if (str == NULL)
        return cly_strdup(part);
    str_len = cly_strlen(str);
    part_len = cly_strlen(part);
    tmp = malloc(str_len + part_len + 1);
    cly_strncpy(tmp, str, str_len);
    cly_strncpy(tmp + str_len, part, part_len);
    tmp[str_len + part_len] = 0;
    return tmp;
}
