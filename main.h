#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);

unsigned int get_base(char f);

int print_count_int(int n, int count);

int print_int(int nu);

char get_hex_char(unsigned int n, int upper);

int print_count_base_x(unsigned int n, unsigned int x, int count, int upper);

int print_base_x(unsigned int n, unsigned int x, int upper);

int _puts(char *s);

int _puts_special_char(char *s);

int is_specifier(char c);

int process_specifier(char f, va_list  *args);

int _printf(const char *format, ...);

#endif /* MAIN_H */
