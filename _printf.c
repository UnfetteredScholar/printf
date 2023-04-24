#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_specifier - checks if a character is a format specifier
 * @f: the character
 *
 * Return: 1 if true, 0 if false
 */
int is_specifier(char f)
{
	return (f == 'c' || f == 's' || f == 'i' || f == 'd' || f == 'b' || f == '%');
}

/**
 * process_specifier - processes a format specifier
 * @f: the format character
 * @args: pointer to the argument list
 *
 * Return: number of characters printed
 */
int process_specifier(char f, va_list *args)
{
	int count = 0;

	if (f == 'c')
		count = _putchar(va_arg(*args, int));
	else if (f == 's')
		count = _puts(va_arg(*args, char *));
	else if (f == 'd' || f == 'i')
		count = print_int(va_arg(*args, int));
	else if (f == 'b')
		count = print_uint_binary(va_arg(*args, unsigned int));
	else if (f == '%')
		count = _putchar('%');

	return (count);
}

/**
 * _printf - prints string to stdout
 * @format: the format string
 *
 * Return: number of characters printed, on failure a negative number
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list args;
	char f, f2;

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		f = format[i];
		f2 = format[i + 1];
		if (f == '%' && is_specifier(f2))
		{
			count += process_specifier(f2, &args);
			i +=  2;
		}
		else
		{
			_putchar(format[i++]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
