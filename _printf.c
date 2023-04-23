#include <stdarg.h>
#include "main.h"

/**
 * is_specifier - checks if a character is a format specifier
 * @f: the character
 *
 * Return: 1 if true, 0 if false
 */
int is_specifier(char f)
{
	return (f == 'c' || f == 's' || f == 'i' || f == 'd' || f == '%');
}

/**
 * _puts - prints a string to stdout
 * @s: the string
 *
 * Return: number of characters printed
 */
int _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		_putchar(s[i++]);
	return (i);
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
	while (format[i] != '\0')
	{
		f = format[i];
		f2 = format[i + 1];
		if (f == '%' && is_specifier(f2))
		{
			if (f2 == 'c')
				count += _putchar(va_arg(args, int));
			else if (f2 == 's')
				count += _puts(va_arg(args, char *));
			else if (f2 == 'd' || f2 == 'i')
				count += print_int(va_arg(args, int));
			else if (f2 == '%')
				count += _putchar('%');
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
