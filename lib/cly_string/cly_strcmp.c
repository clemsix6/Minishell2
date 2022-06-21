/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_strcmp.c
*/

#include "cly_string.h"
#include <stdlib.h>

int cly_strcmp(char const *s1, char const *s2)
{
    if (s1 == NULL || s2 == NULL)
        return -2;
    for (int a = 0; a < cly_strlen(s1); a++) {
        if (s1[a] < s2[a])
            return -1;
        if (s1[a] > s2[a])
            return 1;
    }
    return 0;
}
