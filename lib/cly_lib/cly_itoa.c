/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** my_itoa.c
*/

#include <stdbool.h>
#include "cly_string.h"

void set_buffer(int n, char *buffer, int *i)
{
    int y;

    while (n > 0) {
        y = n % 10;
        n /= 10;
        buffer[(*i)++] = (char)(y + '0');
    }
}

void cly_itoa(int n, char *buffer)
{
    int i = 0;
    bool is_neg = false;

    if (n < 0) {
        is_neg = true;
        n = -n;
    }
    set_buffer(n, buffer, &i);
    if (i == 0)
        buffer[i++] = '0';
    if (is_neg)
        buffer[i++] = '-';
    buffer[i] = 0;
    cly_revstr(buffer);
}
