/*
** EPITECH PROJECT, 2021
** matchsticks
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
    match_t *match = malloc(sizeof(*match));

    if (usage(ac, av) == 1)
        return 0;
    if (error_cases(ac, av) == 84)
        return 84;
    init_match_struct(av, match);
    matchsticks(match);
    return 0;
}