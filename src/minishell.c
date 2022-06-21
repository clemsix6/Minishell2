/*
** EPITECH PROJECT, 2022
** Minishell2
** File description:
** minishell.c
*/

#include <stdlib.h>
#include <unistd.h>
#include "minishell.h"
#include "cly_io.h"

int split_pipe(char *command, char ***env)
{
    char **details = split(command, "|");
    int len = get_len(details);
    command_t **commands = malloc(sizeof(command_t *) * (len + 1));
    int ret = 0;

    for (int i = 0; i < len; i++)
        commands[i] = parse_command(details[i]);
    commands[len] = NULL;
    ret = pipe_execution(commands, env);
    free(commands);
    free(details);
    return ret;
}

int split_semicolon(char *command, char ***env)
{
    int ret = 0;
    char **details = split(command, ";");

    for (int i = 0; details[i] != NULL; i++) {
        ret = split_pipe(details[i], env);
        if (ret != 0)
            break;
    }
    free(details);
    return ret;
}

int loop(char ***env)
{
    char *command;
    int ret = 84;

    while (1) {
        if (isatty(0) == 1)
            cly_write(1, "$> ");
        command = get_command();
        ret = split_semicolon(command, env);
        if (ret != 0)
            return ret;
        free(command);
    }
}

int main(__attribute__((unused)) int ac,
         __attribute__((unused)) char **av,
         char **env)
{
    int ret;

    ret = loop(&env);
    if (ret == -1)
        return 0;
    return 84;
}
