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

	while (s != NULL && s[i] != '\0')
		_putchar(s[i++]);
	return (i);
}
