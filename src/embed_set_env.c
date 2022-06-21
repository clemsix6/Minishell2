/*
** EPITECH PROJECT, 2022
** Minishell2
** File description:
** embed_set_env.c
*/

#include "minishell.h"
#include "cly_io.h"

int embed_set_env(__attribute__((unused)) command_t *command,
               __attribute__((unused)) char ***env)
{
    switch (command->count) {
        case 1:
            print_env(env);
            break;
        case 2:
            set_env(env, command->details[1], "");
            break;
        case 3:
            set_env(env, command->details[1], command->details[2]);
            break;
        default:
            cly_write(2, "setenv: Too many arguments.\n");
    }
    return 0;
}
