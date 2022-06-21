/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_write.c
*/

#include "cly_string.h"
#include <unistd.h>

int cly_write(int fd, char const *str)
{
    int len = cly_strlen(str);

    return (int)(write(fd, str, len));
}
