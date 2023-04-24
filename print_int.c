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

/**
 * print_count_uint_binary - prints an unsigned int in binary format
 * @n: the integer
 * @count: number of characters printed so far
 *
 * Return: the number of characters printed
 */
int print_count_uint_binary(unsigned int n, int count)
{
	if (n != 0)
	{

		count = print_count_uint_binary(n / 2, count);
		_putchar('0' + (n % 2));
		count++;
	}
	return (count);
}

/**
 * print_uint_binary - prints an unsigned int in binary format
 * @n: the number
 *
 * Return: the number of characters printed
 */
int print_uint_binary(unsigned int n)
{
	if (n == 0)
		return (_putchar('0'));
	else
		return (print_count_uint_binary(n, 0));
}
