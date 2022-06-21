/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_strnapnd_str.c
*/

#include "cly_string.h"
#include <stdlib.h>

char *cly_strnapnd_str(char *str, char const *part, int n)
{
    char *tmp;
    int str_len;

    if (part == NULL)
        return cly_strndup(str, n);
    if (str == NULL)
        return cly_strndup(part, n);
    str_len = cly_strlen(str);
    tmp = malloc(str_len + n + 1);
    cly_strncpy(tmp, str, str_len);
    cly_strncpy(tmp + str_len, part, n);
    tmp[str_len + n] = 0;
    return tmp;
}
