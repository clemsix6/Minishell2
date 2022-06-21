/*
** EPITECH PROJECT, 2022
** Minishell2
** File description:
** get_len.c
*/

#include <stdlib.h>

int get_len(char **details)
{
    int count = 0;

    for (; details[count] != NULL; count++);
    return count;
}
