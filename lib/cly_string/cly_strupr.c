/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_strupr.c
*/

#include <stdlib.h>

int cly_strupr(char *str)
{
    if (str == NULL)
        return -1;
    for (int i = 0; str[i] != 0; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
    return 0;
}
