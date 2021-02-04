/*
** EPITECH PROJECT, 2021
** matchsticks
** File description:
** remove_line_matches
*/

#include "my.h"

int remove_line_matches(match_t *match, int line, int matches)
{
    int i = 1;

    for (; match->match[line][i] == ' '; i++);
    for (; match->match[line][i + 1] == '|'; i++);
    for (; matches != 0; matches--, i--)
        match->match[line][i] = ' ';
    return 0;
}