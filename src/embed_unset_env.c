/*
** EPITECH PROJECT, 2022
** Minishell2
** File description:
** embed_unset_env.c
*/

#include "minishell.h"
#include "cly_io.h"

int embed_unset_env(__attribute__((unused)) command_t *command,
                  __attribute__((unused)) char ***env)
{
    if (command->count < 2) {
        cly_write(2, "setenv: Too few arguments.\n");
        return 0;
    }
    for (int i = 1; i < command->count; i++)
        unset_env(env, command->details[i]);
    return 0;
}
