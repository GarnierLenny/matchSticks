/*
** EPITECH PROJECT, 2021
** matchsticks
** File description:
** print_tab
*/

#include "my.h"

void print_tab(char **tab)
{
    for (int line = 0; tab[line] != NULL; line++)
        my_printf("%s\n", tab[line]);
}