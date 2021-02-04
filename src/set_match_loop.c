/*
** EPITECH PROJECT, 2021
** matchsticks
** File description:
** set_match_loop
*/

#include "my.h"

int set_match_loop(char *buffer, match_t *match, int line, size_t size)
{
    while (1) {
        if (error_matches(buffer, line, match) == 0)
            break;
        my_printf("match(es): ");
        getline(&buffer, &size, stdin);
    }
    return my_getnbr(buffer);
}