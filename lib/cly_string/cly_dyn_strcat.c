/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_dyn_strcat.c
*/

#include "cly_string.h"
#include <stdlib.h>

char *cly_dyn_strcat(char const *str1, char const *str2)
{
    int str1_len = cly_strlen(str1);
    int str2_len = cly_strlen(str2);
    char *dest;
    int i;

    if (str1_len == -1 || str2_len == -1)
        return NULL;
    dest = malloc(sizeof(char) * (str1_len + str2_len + 1));
    for (i = 0; i < str1_len; i++)
        dest[i] = str1[i];
    for (i = 0; i < str2_len; i++)
        dest[i + str1_len] = str2[i];
    dest[str1_len + str2_len] = 0;
    return dest;
}
