/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-lenny.garnier
** File description:
** print_hex_convert
*/

#include <stdlib.h>

void my_putchar(char c);
int my_strlen(char *str);

void print_hex_convert(int nb, char from)
{
    char *buffer = malloc(sizeof(char) * 10);
    int res = nb / 16;
    int left = 0;
    int i = 0;

    from = from;
    for (; res >= 1; res = res / 16, nb /= 16, i++) {
        left = nb - (16 * res);
        buffer[i] = left + '0';
        if (buffer[i] > '9')
            buffer[i] = from + ((buffer[i] - 48) - 10);
    }
    left = nb - (16 * res);
    buffer[i] = left + '0';
    if (buffer[i] > '9')
            buffer[i] = from + ((buffer[i] - 48) - 10);
    buffer[i + 1] = '\0';
    for (i = my_strlen(buffer) - 1; i >= 0; i--)
        my_putchar(buffer[i]);
}