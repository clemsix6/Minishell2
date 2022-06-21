/*
** EPITECH PROJECT, 2022
** Minishell2
** File description:
** minishell.h
*/

#ifndef MINISHELL2_MINISHELL_H
#define MINISHELL2_MINISHELL_H

#include "cly_linked_list.h"

typedef struct command_s {
    char **details;
    char *line;
    int count;
} command_t;

typedef struct embed_s {
    int (*function)(command_t *command, char ***env);
    char *name;
} embed_t;

char *get_command();
char **split(char *cmd, const char *separator);
char *get_line(char **command, int start, int end);
int execute_part(command_t *command, char ***env);
void print_env(char ***env);
char *get_env(char ***env, char *key);
char *get_env_value(char ***env, char *key);
int execute(command_t *command, char ***env);
command_t *parse_command(char *command);
int get_len(char **details);
int pipe_execution(command_t **commands, char ***env);

void parse_env(node_t **list, char **env);
char **unparse_env(node_t **list);
void set_env(char ***env, char *key, char *line);
void unset_env(char ***env, char *key);

int embed_exit(__attribute__((unused)) command_t *command,
               __attribute__((unused)) char ***env);
int embed_env(__attribute__((unused)) command_t *command,
               __attribute__((unused)) char ***env);
int embed_set_env(__attribute__((unused)) command_t *command,
               __attribute__((unused)) char ***env);
int embed_unset_env(__attribute__((unused)) command_t *command,
               __attribute__((unused)) char ***env);
int embed_cd(__attribute__((unused)) command_t *command,
               __attribute__((unused)) char ***env);

#endif
