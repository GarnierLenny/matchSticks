/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-lenny.garnier
** File description:
** my_printf
*/

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdarg.h>

int my_put_nbr(int nb);
void my_putchar(char c);
void my_putstr(char const *str);
void print_hex_convert(int nb, char from);
void print_base_convert(int nb, int base);

int flags_xXo(char const *str, va_list ap, int *i)
{
    if (str[*i] == '%' && str[*i + 1] == 'x')
        print_hex_convert((int)va_arg(ap, int), 'a');
    if (str[*i] == '%' && str[*i + 1] == 'X')
        print_hex_convert((int)va_arg(ap, int), 'A');
    if (str[*i] == '%' && str[*i + 1] == 'o')
        print_base_convert((int)va_arg(ap, int), 8);
    if (str[*i] == '%' && str[*i + 1] == 'b')
        print_base_convert((int)va_arg(ap, int), 2);
    return 0;
}

int flags_scdiu(char const *str, va_list ap, int *i)
{
    if (str[*i] == '%' && str[*i + 1] == 'c')
        my_putchar((char) va_arg(ap, int));
    if (str[*i] == '%' && str[*i + 1] == 's')
        my_putstr((char *) va_arg(ap, char *));
    if (str[*i] == '%' && (str[*i + 1] == 'd' ||
        str[*i + 1] == 'i' || str[*i + 1] == 'u'))
        my_put_nbr((int) va_arg(ap, int));
    flags_xXo(str, ap, i);
    return 0;
}

int my_printf(char const *str, ...)
{
    va_list ap;

    va_start(ap, str);
    for (int i = 0; str[i] != '\0'; i++) {
        flags_scdiu(str, ap, &i);
        if (str[i - 1] != '%' && str[i] != '%')
            my_putchar(str[i]);
    }
    va_end(ap);
    return 0;
}