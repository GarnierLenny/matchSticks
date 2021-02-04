/*
** EPITECH PROJECT, 2020
** B-CPE-100-RUN-1-1-cpoolday07-lenny.garnier
** File description:
** my
*/

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <time.h>

#define scp my_strcpy
#define gnb my_getnbr
#define its int_to_str
#define bf buffer
#define ll list_len
#define po p_option

#ifndef MY_H_
#define MY_H_

typedef struct match_s {
    char **match;
    int floor_max;
    int matches_max;
} match_t;

void my_putchar(char c);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
char *my_strcpy(char *dest, char *src);
char **my_str_to_word_array(char const *str);
char *my_strdup(char const *src);
void disp_ss(char **buffer);
char **str_to_word_array_sep(char *str, char separator);
int my_printf(char const *str, ...);
int init_match_struct(char **av, match_t *match);
int set_matches(match_t *match);
int set_ss_bound(match_t *match);
void print_tab(char **tab);
int error_cases(int ac, char  **av);
int is_empty(match_t *match);
int matchsticks(match_t *match);
int remove_line_matches(match_t *match, int line, int matches);
int error_line(char *buffer, int line_lim, match_t *match);
int line_set_loop(char *buffer, match_t *match, size_t size);
int usage(int ac, char **av);
int error_matches(char *buffer, int line, match_t *match);
int set_match_loop(char *buffer, match_t *match, int line, size_t size);
int player_turn(match_t *match);
int AI_turn(match_t *match);

#endif /* !MY_H_ */
