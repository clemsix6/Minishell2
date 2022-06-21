/*
** EPITECH PROJECT, 2022
** Minishell2
** File description:
** execute_app.c
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include "minishell.h"
#include "cly_string.h"
#include "cly_io.h"

char *get_full_path(char *path, command_t *command)
{
    int size1 = cly_strlen(path);
    int size2 = cly_strlen(command->details[0]);
    int size = size1 + size2 + 2;
    char *buffer = malloc(sizeof(char) * size);

    for (int i = 0; i < size1; i++)
        buffer[i] = path[i];
    buffer[size1] = '/';
    for (int i = 0; i < size2; i++)
        buffer[size1 + i + 1] = command->details[0][i];
    buffer[size - 1] = 0;
    return buffer;
}

int try_execute(char *path, command_t *command, char ***env)
{
    char *full_path = get_full_path(path, command);

    return execve(full_path, command->details, *env);
}

void print_not_found(command_t *command)
{
    cly_write(2, command->details[0]);
    cly_write(2, ": Command not found.\n");
}

int fork_exec(command_t *command, char ***env)
{
    char *path = get_env(env, "PATH");
    char **details;

    if (path == NULL)
        return 84;
    details = split(path, "=:");
    for (int i = 0; details[i] != NULL; i++) {
        if (try_execute(details[i], command, env) != -1)
            return 0;
    }
    print_not_found(command);
    return 0;
}

int execute(command_t *command, char ***env)
{
    pid_t current_pid = getpid();

    if (fork() == -1)
        return 84;
    if (getpid() == current_pid) {
        wait(NULL);
        return 0;
    }
    fork_exec(command, env);
    return 0;
}
