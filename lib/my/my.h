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

#define scp my_strcpy
#define gnb my_getnbr
#define its int_to_str
#define bf buffer
#define ll list_len
#define po p_option

#ifndef MY_H_
#define MY_H_

typedef enum {
    false,
    true,
} Bool;

typedef struct List_Element_t {
    int value;
    struct List_Element_t *next;
} List_Element_t, *List_t;

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
List_t new_list(void);
Bool is_empty(List_t  list_a);
int list_len(List_t  list_a);
void print_list(List_t  list_a);
List_t push_back(List_t  list_a, int x);
List_t push_front(List_t  list_a, int x);
List_t pop_back(List_t  list_a);
List_t pop_front(List_t  list_a);
List_t sc_option(List_t  list_a, List_t list_b, int x);
List_t s_option(List_t  list_a);
List_t p_option(List_t l1, List_t l2, int x);
List_t r_option(List_t  list_a);
List_t rr_option(List_t  list_a);
int is_smallest(List_t  list_a);
int sort(List_t  list_a, List_t list_b);
int error_cases(int ac, char **av);
int check_order(List_t  list_a);
List_t get_in_list(List_t  list_a, char **av);
int sort_v2(List_t  list_a, List_t list_b);

#endif /* !MY_H_ */
