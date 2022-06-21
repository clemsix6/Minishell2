/*
** EPITECH PROJECT, 2022
** Minishell2
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>

int getnb_line(char *str, char c)
{
    int i = 0;
    int a = 0;

    for (; str[i] == c; i++);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c && str[i + 1] != c && str[i + 1] != '\0')
            a++;
    }
    return a + 1;
}

int getnb_col(char *str, int nb, char c)
{
    int a = 0;

    for (; str[nb] != '\0'; nb++) {
        if (str[nb] == c)
            break;
        else
            a++;
    }
    return a;
}

char **cly_to_wordarray(char *str, char c)
{
    int j = 0;
    int count = 0;
    int nb_c = 0;
    int nb = getnb_line(str, c);
    char **result = malloc(sizeof(char *) * (nb + 1));

    for (int i = 0; i < nb; i++) {
        for (; str[count] == c; count++);
        nb_c = getnb_col(str, count, c);
        result[i] = malloc(sizeof(char) * (nb_c + 1));
        j = 0;
        for (; j < nb_c; j++)
            result[i][j] = str[count++];
        result[i][j] = '\0';
    }
    result[nb] = NULL;
    return result;
}
