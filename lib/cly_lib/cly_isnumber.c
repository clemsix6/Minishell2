/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_isnumber.c
*/

int cly_isnumber(char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}
