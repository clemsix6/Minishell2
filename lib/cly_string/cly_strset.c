/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_strset.c
*/

#include <stdlib.h>

int cly_strset(char *str, char c)
{
    if (str == NULL)
        return -1;
    for (int i = 0; str[i] != 0; i++)
        str[i] = c;
    return 0;
}
