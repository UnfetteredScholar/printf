#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);

int print_count_int(int n, int count);

int print_int(int nu);

int print_count_uint_binary(unsigned int n, int count);

int print_uint_binary(unsigned int n);

int _puts(char *s);

int is_specifier(char c);

int process_specifier(char f, va_list  *args);

int _printf(const char *format, ...);

#endif /* MAIN_H */
