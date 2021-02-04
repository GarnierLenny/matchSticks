/*
** EPITECH PROJECT, 2021
** matchsticks
** File description:
** error_line
*/

#include "my.h"

int error_line_char(char *buffer, int line_lim)
{
    int i = 0;

    for (; buffer[i] != '\0'; i++) {
        if ((buffer[i] < '0' || buffer[i] > '9') && buffer[i] != '\n') {
            my_printf("Invalid line number\n");
            return 84;
        }
    }
    if (my_getnbr(buffer) > line_lim || my_getnbr(buffer) == 0) {
        my_printf("Invalid line number\n");
        return 84;
    }
    return 0;
}

int error_line(char *buffer, int line_lim, match_t *match)
{
    int i = 0;
    int count = 0;

    if (error_line_char(buffer, line_lim) == 84)
        return 84;
    for (; match->match[my_getnbr(buffer)][i] != '\0'; i++)
        if (match->match[my_getnbr(buffer)][i] == '|')
            count++;
    if (count == 0) {
        my_printf("No matches left on this line\n");
        return 84;
    }
    return 0;
}