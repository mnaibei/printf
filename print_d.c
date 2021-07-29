#include "holberton.h"

/**
 * _print_d - print an integer (helper function)
 * @n: the number to print
 * @count: a pointer to the counter
 *
 * Return: the number of bytes printed
 */
void _print_d(int n, int *count)
{
	int last_ret_val = 0;

	if (n < 0)
	{
		*count = _putchar('-');
		if (*count < 0)
			return;
		if (n < -9)
			_print_d(n / -10, count);
		if (*count < 0)
			return;
		last_ret_val = _putchar('0' - n % 10);
	}
	else
	{
		if (n > 9)
			_print_d(n / 10, count);
		if (*count < 0)
			return;
		last_ret_val = _putchar('0' + n % 10);
	}
	if (last_ret_val < 0)
		*count = (-1);
	else
		*count += last_ret_val;
}

/**
 * print_d - print an integer
 * @arg: the va_list argument
 *
 * Return: the number of bytes printed
 */

int print_d(va_list arg)
{
	int counter = 0;

	_print_d(va_arg(arg, int), &counter);
	return (counter);
}
