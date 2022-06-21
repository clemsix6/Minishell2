/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_isletter.c
*/

#include "cly_lib.h"

int cly_isletter(char c)
{
    if (cly_islower(c) == 1 || cly_isupper(c) == 1)
        return 1;
    return 0;
}
