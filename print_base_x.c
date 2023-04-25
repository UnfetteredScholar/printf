#include "main.h"
/**
 * get_base - get number base  from format specifier
 * @f: the format specifier
 *
 * Return: the number base
 */
unsigned int get_base(char f)
{
	unsigned int base = 10;
	if (f == 'u')
		base = 10;
	else if (f == 'b')
		base = 2;
	else if (f == 'o')
		base = 8;
	else if (f == 'x' || f == 'X')
		base = 16;
	return (base);
}
/**
 * get_hex_char - gets the hexadecimal character
 * @c: the number
 * @upper: choose uppercase characters
 * Return: the hexadecimal character
 */
char get_hex_char(unsigned int c, int upper)
{
	if (c <= 9)
	{
		return ('0' +  c);
	}
	else
	{
		if (upper)
			return ('A' + (c - 10));
		else
			return ('a' +  (c - 10));
	}
}

/**
 * print_count_base_x - prints an unsigned int in base x format
 * @n: the integer
 * @count: number of characters printed so far
 * @x: the number base (up to 16)
 * @upper: uppercase selection
 *
 * Return: the number of characters printed
 */
int print_count_base_x(unsigned int n, unsigned int x, int count, int upper)
{
	if (n != 0)
	{

		count = print_count_base_x(n / x, x, count, upper);
		_putchar(get_hex_char(n % x, upper));
		count++;
	}
	return (count);
}

/**
 * print_base_x - prints an unsigned int in base x format
 * @n: the number
 * @x: the base to print in
 * @upper: print uppercase letters (apples only to base 11 and above)
 *
 * Return: the number of characters printed
 */
int print_base_x(unsigned int n, unsigned int x, int upper)
{
	if (n == 0)
		return (_putchar('0'));
	else
		return (print_count_base_x(n, x, 0, upper));
}
