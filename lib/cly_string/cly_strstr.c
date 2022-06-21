/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_strstr.c
*/

#include <stdlib.h>

char *cly_strstr(char *full_string, const char *sub_string)
{
    char *start = NULL;
    int sub_index = 0;

    if (full_string == NULL || sub_string == NULL)
        return NULL;
    for (int i = 0; full_string[i] != 0; i++) {
        if (full_string[i] != sub_string[sub_index]) {
            start = NULL;
            sub_index = 0;
            continue;
        }
        if (sub_index == 0)
            start = full_string + i;
        sub_index++;
        if (sub_string[sub_index] == 0)
            return start;
    }
    return NULL;
}
