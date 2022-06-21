/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_strnset.c
*/

#include <stdlib.h>

int cly_strnset(char *str, char c, int n)
{
    if (str == NULL)
        return -1;
    for (int i = 0; i < n; i++)
        str[i] = c;
    return 0;
}
