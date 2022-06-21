/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_string.h
*/

#ifndef CLY_CLY_STRING_H
#define CLY_CLY_STRING_H

int cly_strlen(char const *str);
int cly_revstr(char *str);
int cly_strcpy(char *dest, char const *src);
int cly_strncpy(char *dest, char const *src, int n);
char *cly_strapnd_chr(char *str, char c);
int cly_dyn_strapnd_chr(char **str, char c);
int cly_strcmp(char const *s1, char const *s2);
char **cly_to_wordarray(char *str, char c);
int cly_strncmp(char const *s1, char const *s2, int n);
char *cly_strtok(char *str, char *separators);
char **cly_str_split(const char *str, char separator);
int cly_strcat(char *dest, char const *src);
char *cly_dyn_strcat(char const *str1, char const *str2);
int cly_strupr(char *str);
int cly_strlwr(char *str);
char *cly_strstr(char *full_string, const char *sub_string);
int cly_strset(char *str, char c);
int cly_strnset(char *str, char c, int n);
char *cly_strrplc_chr(char *str, char old, char new);
char *cly_strdup(char const *src);
char *cly_strapnd_str(char *str, char const *part);
int cly_dyn_strapnd_str(char **str, char const *part);
char *cly_strrplc_str(char *str, char const *old, char const *new);
char *cly_strnapnd_str(char *str, char const *part, int n);
int cly_dyn_strnapnd_str(char **str, char const *part, int n);
char *cly_strrmv(char *str, int index, int count);
char *cly_strndup(char const *src, int n);

#endif
