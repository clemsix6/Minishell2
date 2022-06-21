/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_putchar.c
*/

#include <unistd.h>

int cly_putchar(char c)
{
    return (int)(write(1, &c, 1));
}
