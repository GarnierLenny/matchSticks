/*
** EPITECH PROJECT, 2021
** matchsticks
** File description:
** error_matches
*/

#include "my.h"

int error_matches_nb(char *buffer, match_t *match, int count)
{
    if (my_getnbr(buffer) == 0 || my_getnbr(buffer) > match->matches_max) {
        my_printf("Cannot remove %d match(es)\n", my_getnbr(buffer));
        return 84;
    }
    if (my_getnbr(buffer) > count) {
        my_printf("Not that much match(es) on this line\n");
        return 84;
    }
    return 0;
}

int error_matches(char *buffer, int line, match_t *match)
{
    int i = 0;
    int count = 0;

    for (; buffer[i] != '\0'; i++)
        if ((buffer[i] < '0' || buffer[i] > '9') && buffer[i] != '\n')
            return 84;
    for (i = 0; match->match[line][i] != '\0'; i++) {
        if (match->match[line][i] == '|')
            count++;
    }
    if (error_matches_nb(buffer, match, count) == 84)
        return 84;
    return 0;
}