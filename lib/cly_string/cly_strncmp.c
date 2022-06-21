/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_strncmp.c
*/

#include "cly_string.h"
#include <stdlib.h>

int cly_strncmp(char const *s1, char const *s2, int n)
{
    if (s1 == NULL || s2 == NULL)
        return -2;
    for (int a = 0; a < n; a++) {
        if (s1[a] < s2[a])
            return -1;
        if (s1[a] > s2[a])
            return 1;
    }
    return 0;
}
