/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_strlen.c
*/

#include <stdlib.h>

int cly_strlen(char const *str)
{
    int i = 0;

    if (str == NULL)
        return -1;
    while (str[i] != 0)
        i++;
    return i;
}
