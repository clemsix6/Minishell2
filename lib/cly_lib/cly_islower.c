/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_islower.c
*/

int cly_islower(char c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    return 0;
}
