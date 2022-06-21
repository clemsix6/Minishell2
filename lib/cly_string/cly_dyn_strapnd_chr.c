/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_dyn_strapnd_chr.c
*/

#include "cly_string.h"
#include <stdlib.h>

int cly_dyn_strapnd_chr(char **str, char c)
{
    char *tmp;

    if (str == NULL)
        return -1;
    tmp = cly_strapnd_chr(*str, c);
    if (tmp == NULL)
        return -1;
    *str = tmp;
    return 0;
}
