/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_strcpy.c
*/

#include <stdlib.h>

int cly_strcpy(char *dest, char const *src)
{
    if (src == NULL || dest == NULL)
        return -1;
    for (int i = 0; src[i] != 0; i++)
        dest[i] = src[i];
    return 0;
}
