/*
** EPITECH PROJECT, 2021
** matchsticks
** File description:
** player_turn
*/

#include "my.h"

int player_turn(match_t *match)
{
    int line = 0;
    int matches = 0;
    char *buffer = NULL;
    size_t size = 2048;

    print_tab(match->match);
    my_printf("line: ");
    getline(&buffer, &size, stdin);
    line = line_set_loop(buffer, match, size);
    my_printf("match(es): ");
    getline(&buffer, &size, stdin);
    matches = set_match_loop(buffer, match, line, size);
    my_printf("\n");
    remove_line_matches(match, line, matches);
    if (is_empty(match) == 1)
        return 1;
    return 0;
}