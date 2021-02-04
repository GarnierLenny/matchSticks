/*
** EPITECH PROJECT, 2021
** matchsticks
** File description:
** init_match_struct
*/

#include "my.h"

int init_match_struct(char **av, match_t *match)
{
    match->floor_max = my_getnbr(av[1]);
    match->matches_max = my_getnbr((av[2]));
    set_ss_bound(match);
    set_matches(match);
    return 0;
}