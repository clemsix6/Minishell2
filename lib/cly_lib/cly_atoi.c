/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** my_atoi.c
*/

int add(int *nbr, char c)
{
    int v = c - '0';
    int last = *nbr;

    *nbr += v;
    *nbr *= 10;
    if (last > *nbr)
        return 0;
    return 1;
}

int cly_atoi(char const *str)
{
    int index = 0;
    char sign = '+';
    int nbr = 0;

    while (str[index] < '0' || str[index] > '9') {
        if (str[index] == 0)
            return 0;
        index++;
    }
    if (index > 0 && str[index - 1] == '-')
        sign = '-';
    for (int i = index; str[i] >= '0' && str[i] <= '9' && str[i] != 0; i++) {
        if (add(&nbr, str[i]) == 0)
            return 0;
    }
    nbr /= 10;
    if (sign == '-')
        nbr = -nbr;
    return nbr;
}
