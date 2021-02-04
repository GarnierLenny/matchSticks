/*
** EPITECH PROJECT, 2021
** matchsticks
** File description:
** AI_turn
*/

#include "my.h"

int is_one_left(match_t *match)
{
    int line = 0;
    int i = 0;
    int count = 0;

    for (; match->match[line] != NULL; line++) {
        for (i = 0; match->match[line][i] != '\0'; i++)
            if (match->match[line][i] == '|')
                count++;
    }
    if (count == 1)
        return 1;
    return 0;
}

int is_line_empty(match_t *match, int line)
{
    for (int i = 0; match->match[line][i] != '\0'; i++)
        if (match->match[line][i] == '|')
            return 0;
    return 1;
}

int ai_is_match_right(match_t *match, int line, int matches)
{
    int count = 0;

    for (int i = 0; match->match[line][i] != '\0'; i++)
        if (match->match[line][i] == '|')
            count++;
    if (matches > count)
        return 0;
    return 1;
}

int AI_turn(match_t *match)
{
    int line = 0;
    int matches = 0;

    print_tab(match->match);
    if (is_one_left(match) == 1)
        return 1;
    srand(time(NULL));
    line = (rand() % (match->floor_max - 1)) + 1;
    while (is_line_empty(match, line) == 1)
        line = (rand() % (match->floor_max - 1)) + 1;
    my_printf("line: %d\n", line);
    if (match->matches_max == 1)
        matches = 1;
    else
        matches = (rand() % (match->matches_max - 1)) + 1;
    while (ai_is_match_right(match, line, matches) == 0)
        matches = (rand() % (match->matches_max - 1)) + 1;
    my_printf("matches: %d\n\n", matches);
    remove_line_matches(match, line, matches);
    if (is_empty(match) == 1)
        return 1;
    return 0;
}