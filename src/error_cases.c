/*
** EPITECH PROJECT, 2021
** matchsticks
** File description:
** error_cases
*/

#include "my.h"

int error_cases(int ac, char  **av)
{
    if (ac != 3)
        return 84;
    for (int i = 0; av[1][i] != '\0'; i++)
        if (av[1][i] < '0' || av[1][i] > '9')
            return 84;
    for (int i = 0; av[2][i] != '\0'; i++)
        if (av[2][i] < '0' || av[2][i] > '9')
            return 84;
    return 0;
}