/*
** EPITECH PROJECT, 2021
** matchsticks
** File description:
** matchsticks
*/

#include "my.h"

int matchsticks(match_t *match)
{
    while (1) {
        my_printf("Player turn:\n\n");
        if (player_turn(match) == 1) {
            my_printf("AI won !\n");
            return 0;
        }
        my_printf("-----------------------------------\n\n");
        my_printf("AI turn:\n\n");
        if (AI_turn(match) == 1) {
            my_printf("You won !\n");
            return 1;
        }
        my_printf("-----------------------------------\n\n");
    }
    return 0;
}