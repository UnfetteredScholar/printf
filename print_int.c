#include "main.h"

/**
 * print_int - prints an integer to stdout
 * @nu: the integer to print
 *
 * Return: void
 */
void print_int(int nu)
{
	long int n = nu;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n < 10)
	{
		_putchar('0' + n);
	}
	else
	{
		print_int(n / 10);
		_putchar('0' + (n % 10));
	}
}
