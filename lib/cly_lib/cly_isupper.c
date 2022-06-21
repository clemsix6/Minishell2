/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_isupper.c
*/

int cly_isupper(char c)
{
    if (c >= 'A' && c <= 'Z')
        return 1;
    return 0;
}
