/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_strlwr.c
*/

#include <stdlib.h>

int cly_strlwr(char *str)
{
    if (str == NULL)
        return -1;
    for (int i = 0; str[i] != 0; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
    return 0;
}
