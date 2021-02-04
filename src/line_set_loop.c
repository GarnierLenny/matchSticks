/*
** EPITECH PROJECT, 2021
** matchsticks
** File description:
** line_set_loop
*/

#include "my.h"

int line_set_loop(char *buffer, match_t *match, size_t size)
{
    while (1) {
        if (error_line(buffer, match->floor_max, match) == 0)
            break;
        my_printf("line: ");
        getline(&buffer, &size, stdin);
    }
    return my_getnbr(buffer);
}