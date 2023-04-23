#include <stdarg.h>
#include "main.h"

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
		if (f == '%' && (f2 == 'c' || f2 == 's' || f2 == 'd' || f2 == 'i'))
		{
			switch (f2)
			{
				case 'c':
					count += _putchar(va_arg(args, int));
					break;
				case 's':
					count += _puts(va_arg(args, char *));
					break;
				case 'd':
					count += print_int(va_arg(args, int));
					break;
				case 'i':
					count += print_int(va_arg(args, int));
					break;
				default:
					break;
			}
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
