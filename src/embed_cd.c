/*
** EPITECH PROJECT, 2022
** Minishell2
** File description:
** embed_cd.c
*/

#include <unistd.h>
#include "minishell.h"
#include "cly_io.h"
#include "cly_string.h"

void update_old(char ***env)
{
    set_env(env, "OLDPWD", get_env_value(env, "PWD"));
}

void update_pwd(char ***env)
{
    char buffer[128];

    if (getcwd(buffer, sizeof(buffer)) != NULL)
        set_env(env, "PWD", buffer);
}

void undo(char ***env)
{
    char *old = get_env_value(env, "OLDPWD");

    if (chdir(old) == -1)
        return;
    set_env(env, "OLDPWD", get_env_value(env, "PWD"));
    set_env(env, "PWD", old);
}

int embed_cd(__attribute__((unused)) command_t *command,
              __attribute__((unused)) char ***env)
{
    if (command->count <= 1) {
        if (chdir(get_env_value(env, "HOME")) == 0)
            update_old(env);
    } else if (command->count == 2) {
        if (cly_strncmp(command->details[1], "-", 1) == 0) {
            undo(env);
            return 0;
        }
        if (chdir(command->details[1]) == -1) {
            cly_write(2, command->details[1]);
            cly_write(2, ": No such file or directory.\n");
        } else {
            update_old(env);
        }
    } else {
        cly_write(2, "cd: Too many arguments.\n");
    }
    update_pwd(env);
    return 0;
}
