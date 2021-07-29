#include "holberton.h"

/**
 * _print_b - print an integer in binary (helper function)
 * @n: the number to print
 * @count: a pointer to the counter
 *
 * Return: the number of bytes printed
 */
void _print_b(unsigned int n, int *count)
{
	int last_ret_val = 0;

	if (n > 1)
		_print_b(n >> 1, count);
	if (*count < 0)
		return;
	last_ret_val = _putchar('0' + n % 2);
	if (last_ret_val < 0)
		*count = (-1);
	else
		*count += last_ret_val;
}

/**
 * print_b - print an integer in binary
 * @arg: the va_list argument
 *
 * Return: the number of bytes printed
 */

int print_b(va_list arg)
{
	int counter = 0;

	_print_b(va_arg(arg, int), &counter);
	return (counter);
}
