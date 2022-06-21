/*
** EPITECH PROJECT, 2022
** Minishell2
** File description:
** pipe_execution.c
*/

#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include "minishell.h"

void child_exec(int fd[], int fdd, command_t **commands, char ***env)
{
    int res;

    dup2(fdd, 0);
    if (*(commands + 1) != NULL)
        dup2(fd[1], 1);
    close(fd[0]);
    res = execute_part(*commands, env);
    exit(res);
}

int parent_exec(int *fdd, int fd[], command_t ***commands, int ret)
{
    int res;

    wait(&res);
    close(fd[1]);
    *fdd = fd[0];
    (*commands)++;
    if (ret == 0 && res == 65280)
        return -1;
    else if (res == 84)
        return 84;
    return res;
}

int pipeline(command_t **commands, char ***env)
{
    int fd[2];
    pid_t pid;
    int fdd = 0;
    int ret = 0;

    while (*commands != NULL) {
        pipe(fd);
        if ((pid = fork()) == -1)
            exit(1);
        else if (pid == 0)
            child_exec(fd, fdd, commands, env);
        else
            ret = parent_exec(&fdd, fd, &commands, ret);
    }
    return ret;
}

int pipe_execution(command_t **commands, char ***env)
{
    return pipeline(commands, env);
}
