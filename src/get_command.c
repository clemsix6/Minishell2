/*
** EPITECH PROJECT, 2022
** Minishell2
** File description:
** get_command.c
*/

#include "minishell.h"
#include <stdio.h>
#include <stdlib.h>

char *get_command()
{
    char *command = NULL;
    size_t len = 0;

    if (getline(&command, &len, stdin) == -1)
        exit(84);
    return command;
}
