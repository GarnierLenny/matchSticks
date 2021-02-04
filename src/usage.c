/*
** EPITECH PROJECT, 2021
** matchsticks
** File description:
** usage
*/

#include "my.h"

int my_strcomp(char *s1, char *s2)
{
    int i = 0;

    for (; s1[i] != '\0'; i++)
        if (s1[i] != s2[i])
            return 0;
    return 1;
}

int usage(int ac, char **av)
{
    if (ac == 2 && my_strcomp(av[1], "-h") == 1) {
        my_printf("USAGE:\n");
        my_printf("\t./matchsticks x y\n");
        my_printf("\tx : floors of matches to play with\n");
        my_printf("\ty : maximum matches to remove at once\n\n");
        return 1;
    }
    return 0;
}