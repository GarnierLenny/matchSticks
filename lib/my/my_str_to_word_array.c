/*
** EPITECH PROJECT, 2020
** B-CPE-100-RUN-1-1-cpoolday08-lenny.garnier
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>

int my_strlen(char *str);
char *my_strdup(char const *src);

int is_nonalphanum(char c)
{
    if ((c >= '1' && c <= '9') ||
        (c >= 'A' && c <= 'Z') ||
        (c >= 'a' && c <= 'z'))
        return 0;
    return 1;
}

int find_word_nb_size(char *str, int nb)
{
    int ref = 0;
    int i = 0;
    int size = 0;

    while (str[i] != '\0') {
        if (is_nonalphanum(str[i]) == 1) {
            if (ref == nb)
                break;
            else {
                ref++;
                size = -1;
            }
        }
        size++;
        i++;
    }
    return size;
}

char **malloc_ss(char *str)
{
    int line = 0;
    char **buffer = malloc(sizeof(char *) * find_word_nb_size(str, 0));

    while (line <= find_word_nb_size(str, 0)) {
        buffer[line] = malloc(sizeof(char) * find_word_nb_size(str, line));
        line++;
    }
    return buffer;
}

char **my_str_to_word_array(char const *str)
{
    int i = 0;
    int y = 0;
    int line = 0;
    char **buffer;

    if (str == NULL)
        return 0;
    buffer = malloc_ss(my_strdup(str));
    while (str[i] != '\0') {
        buffer[line][y] = str[i];
        if (is_nonalphanum(str[i]) == 1) {
            y = -1;
            line++;
        }
        i++;
        y++;
    }
    buffer[line + 1] = NULL;
    return buffer;
}