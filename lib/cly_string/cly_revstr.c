/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_revstr.c
*/

#include "cly_string.h"

int cly_revstr(char *str)
{
    int len = cly_strlen(str);
    char tmp[len];

    if (len == -1)
        return -1;
    cly_strcpy(tmp, str);
    for (int i = 0; i < len; i++)
        str[i] = tmp[len - i - 1];
    return 0;
}
