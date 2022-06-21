/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_io.h
*/

#ifndef CLY_CLY_IO_H
#define CLY_CLY_IO_H

int cly_putchar(char c);
int cly_write(int fd, char const *str);
char *cly_readuntil(int fd, char c);
char *cly_readline(int fd);

#endif //CLY_CLY_IO_H
