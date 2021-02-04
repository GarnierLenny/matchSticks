/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-lenny.garnier
** File description:
** print_oct_convert
*/

#include <stdlib.h>

void my_putchar(char c);
int my_strlen(char *str);

void print_base_convert(int nb, int base)
{
    char *buffer = malloc(sizeof(char) * 10);
    int res = nb / base;
    int left = 0;
    int i = 0;

    for (; res >= 1; res = res / base, nb /= base, i++) {
        left = nb - (base * res);
        buffer[i] = left + '0';
    }
    left = nb - (base * res);
    buffer[i] = left + '0';
    buffer[i + 1] = '\0';
    for (i = my_strlen(buffer) - 1; i >= 0; i--)
        my_putchar(buffer[i]);
}