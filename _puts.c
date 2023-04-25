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

/**
 * _puts_special_char
 * @s: the string
 *
 * Return: the number of characters printed
 */
int _puts_special_char(char *s)
{
	int i = 0;
	int count = 0;

	while (s != NULL && s[i] != '\0')
	{
		if ((s[i] > 0 && s[i] < 32) || (s[i] >= 127))
		{
			count += _putchar('\\');
			count += _putchar('x');
			if (s[i] < 16)
			{
				count += _putchar('0');
			}
			count += print_base_x((unsigned char) s[i], 16, 1);
		}
		else
		{
			count += _putchar(s[i]);
		}
		i++;
	}
	return (count);
}

