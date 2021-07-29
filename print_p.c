#include "holberton.h"


/**
 * _print_p - print an adress in hexadecimal (lowercase) (helper function)
 * @n: the integer to print
 * @count: a pointer to a counter for the number of bytes printed
 */
void _print_p(unsigned long int n, int *count)
{
	int last_ret_val;

	if (n > 0xf)
		_print_p(n >> 4, count);

	if (*count < 0)
		return;

	if ((n & 0xf) < 0xa)
		last_ret_val = _putchar('0' + (n & 0xf));
	else
		last_ret_val = _putchar('a' + (n & 0xf) % 0xa);

	if (last_ret_val < 0)
		*count = (-1);
	else
		*count += last_ret_val;
}


/**
 * print_p - print an address in hexadecimal (lowercase)
 * @args: the va_list with the integer to print as it's next element
 *
 * Return: the number of bytes printed
 */
int print_p(va_list args)
{
	int count;
	void *p = va_arg(args, void *);

	if (!p)
		return (_printf("(nil)"));

	count = _printf("0x");
	if (count < 0)
		return (-1);

	_print_p((unsigned long int) p, &count);

	return (count);
}
