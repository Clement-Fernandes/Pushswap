/*
** EPITECH PROJECT, 2020
** bsprintf.h
** File description:
** print
*/

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#ifndef bsprintf
#define bsprintf
#define BINARY "01"
#define OCTAL "01234567"
#define HEXAMIN "0123456789abcdef"
#define HEXAMAJ "0123456789ABCDEF"

void my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);
int my_printf(char *str, ...);
int my_flag_b(unsigned int nb);
int my_flag_u(unsigned int nb);
int my_flag_o(unsigned int nb);
int my_flag_x_min(unsigned int nb);
int my_flag_x_maj(unsigned int nb);
void my_flags(char *str, va_list va, int i);
void my_flags_two(char *str, va_list va, int i);
void my_flags_three(char *str, va_list va, int i);
void porcent_flag(char *str, va_list va, int i);
int call(char *str, va_list va, int i);
int my_flag_s_maj(char *str);
int space_flag(char *str, int i);
int my_getnbr(char *str);

#endif /* !bsprintf */
