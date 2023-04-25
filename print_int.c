#include "main.h"

/**
 * print_count_int - prints an integer to stdout
 * @nu: the integer to print
 * @count: the intitial count
 *
 * Return: the number of characters printed
 */
int print_count_int(int nu, int count)
{
	long int n = nu;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
		count++;
	}

	if (n < 10)
	{
		_putchar('0' + n);
		count++;
	}
	else
	{
		count = print_count_int(n / 10, count);
		_putchar('0' + (n % 10));
		count++;
	}
	return (count);
}

/**
 * print_int - prints an integer to stdout
 * @n: the integer
 *
 * Return: the number of characters printed
 */
int print_int(int n)
{
	return (print_count_int(n, 0));
}
