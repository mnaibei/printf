#include "holberton.h"
/**
 * _print_o - print an integer in octal (helper function)
 * @n: the integer to print
 * @count: a pointer to a counter for the number of bytes printed
 */
void _print_o(unsigned int n, int *count)
{
int lastRetVal;
if (n > 07)
_print_o(n >> 3, count);
if (*count < 0)
return;
lastRetVal = _putchar('0' + (n & 07));
if (lastRetVal < 0)
*count = (-1);
else
*count += lastRetVal;
}

/**
 * print_o - print an integer in octal
 * @args: the va_list with the integer to print as it's next element
 *
 * Return: the number of bytes printed
 */
int print_o(va_list args)
{
int count = 0;
_print_o(va_arg(args, int), &count);
return (count);
}
