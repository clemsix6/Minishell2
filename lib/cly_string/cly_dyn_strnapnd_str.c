/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_dyn_strnapnd_str.c
*/

#include "cly_string.h"
#include <stdlib.h>

int cly_dyn_strnapnd_str(char **str, char const *part, int n)
{
    char *tmp;

    if (str == NULL)
        return -1;
    tmp = cly_strnapnd_str(*str, part, n);
    if (tmp == NULL)
        return -1;
    if (*str != NULL)
        free(*str);
    *str = tmp;
    return 0;
}
