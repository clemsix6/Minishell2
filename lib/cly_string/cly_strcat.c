/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_strcat.c
*/

#include "cly_string.h"

int cly_strcat(char *dest, char const *src)
{
    int dest_len = cly_strlen(dest);
    int src_len = cly_strlen(src);
    int i = 0;

    if (dest_len == -1 || src_len == -1)
        return -1;
    for (; i < src_len; i++)
        dest[i + dest_len] = src[i];
    dest[i + dest_len] = 0;
    return 0;
}
