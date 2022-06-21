/*
** EPITECH PROJECT, 2022
** Minishell2
** File description:
** embed_env.c
*/

#include <stdlib.h>
#include "minishell.h"
#include "cly_io.h"

void print_env(char ***env)
{
    for (int i = 0; (*env)[i] != NULL; i++) {
        cly_write(1, (*env)[i]);
        cly_write(1, "\n");
    }
}

int embed_env(__attribute__((unused)) command_t *command,
              __attribute__((unused)) char ***env)
{
    print_env(env);
    return 0;
}
