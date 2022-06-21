/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_dyn_append_string.c
*/

#include "cly_string.h"
#include <stdlib.h>

int cly_dyn_strapnd_str(char **str, char const *part)
{
    char *tmp;

    if (str == NULL)
        return -1;
    tmp = cly_strapnd_str(*str, part);
    if (tmp == NULL)
        return -1;
    if (*str != NULL)
        free(*str);
    *str = tmp;
    return 0;
}
