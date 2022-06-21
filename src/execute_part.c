/*
** EPITECH PROJECT, 2022
** Minishell2
** File description:
** execute_part.c
*/

#include <stdio.h>
#include "minishell.h"
#include "cly_string.h"
#include "cly_io.h"

const embed_t embeds[] = {
    {embed_exit, "exit"},
    {embed_env, "env"},
    {embed_set_env, "setenv"},
    {embed_unset_env, "unsetenv"},
    {embed_cd, "cd"},
};

bool str_equals(char *str1, char *str2)
{
    if (cly_strlen(str1) != cly_strlen(str2))
        return false;
    for (int i = 0; i < cly_strlen(str1); i++) {
        if (str1[i] != str2[i])
            return false;
    }
    return true;
}

int execute_part(command_t *command, char ***env)
{
    int ret;

    for (int i = 0; i < 5; i++) {
        if (str_equals(command->details[0], embeds[i].name))
            return embeds[i].function(command, env);
    }
    ret = execute(command, env);
    if(ret == 84)
        return 84;
    return 0;
}
