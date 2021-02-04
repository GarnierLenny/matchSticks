/*
** EPITECH PROJECT, 2021
** matchsticks
** File description:
** set_matches
*/

#include "my.h"

int set_matches(match_t *match)
{
    int spaces = ((match->floor_max * 2) - 1) / 2;
    int matches = 1;
    int i = 0;
    int ref = 0;

    for (int line = 1; match->match[line + 1] != NULL; line++) {
        for (i = 1, ref = spaces; ref != 0; ref--, i++)
            match->match[line][i] = ' ';
        for (ref = matches; ref != 0; ref--, i++)
            match->match[line][i] = '|';
        spaces -= 1;
        matches += 2;
    }
    return 0;
}