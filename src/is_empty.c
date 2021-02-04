/*
** EPITECH PROJECT, 2021
** matchsticks
** File description:
** is_empty
*/

#include "my.h"

int is_empty(match_t *match)
{
    int line = 1;
    int i = 0;

    for (; match->match[line + 1] != NULL; line++) {
        for (i = 0; match->match[line][i] != '\0'; i++) {
            if (match->match[line][i] == '|')
                return 0;
        }
    }
    return 1;
}