/*
** EPITECH PROJECT, 2020
** hidenp.c
** File description:
** Thomas Olry's hidenp.c made the 01/03/2020
*/

#include "hidenp.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i += 1)
        my_putchar(str[i]);
    return (0);
}

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i += 1;
    return (i);
}

int hidenp(char *s1, char *s2)
{
    int j = 0;

    for (int i = 0; s2[i] != '\0'; i += 1) {
        if (s1[j] == s2[i])
            j += 1;
    }
    if (j == my_strlen(s1))
        my_putstr("1\n");
    else
        my_putstr("0\n");
    return (0);
}

int main(int ac, char **av)
{
    if (ac != 3)
        return (84);
    hidenp(av[1], av[2]);
    return (0);
}
