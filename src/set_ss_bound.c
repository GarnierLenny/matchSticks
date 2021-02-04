/*
** EPITECH PROJECT, 2021
** matchsticks
** File description:
** set_ss_bound
*/

#include "my.h"

int set_ss_bound(match_t *match)
{
    int line = 0;
    int i = 0;

    match->match = malloc(sizeof(char *) * (match->floor_max + 3));
    for (; line <= (match->floor_max + 1); line++) {
        match->match[line] = malloc(sizeof(char) *
            ((match->floor_max * 2) - 1));
        for (i = 0; i <= ((match->floor_max * 2)); i++) {
            if (line == 0 || line == match->floor_max + 1 ||
                i == 0 || i == ((match->floor_max * 2)))
                match->match[line][i] = '*';
            else
                match->match[line][i] = ' ';
        }
    }
    match->match[line] = NULL;
    return 0;
}