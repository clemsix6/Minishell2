/*
** EPITECH PROJECT, 2022
** Minishell2
** File description:
** parse_command.c
*/

#include <stdlib.h>
#include "minishell.h"

command_t *parse_command(char *command)
{
    command_t *cmd = malloc(sizeof(command_t));
    char **details = split(command, " \t\n");
    int count = get_len(details);
    char *line = get_line(details, 0, count);

    cmd->details = details;
    cmd->line = line;
    cmd->count = count;
    return cmd;
}
