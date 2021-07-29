#include "holberton.h"
/**
 *_print_X - print an integer in hexadecimal (uppercase) (helper function)
 *@n: the integer to print
 *@count: a pointer to a counter for the number of bytes printed
 */
void _print_X(unsigned int n, int *count)
{
int lastRetVal;
if (n > 0xf)
_print_X(n >> 4, count);
if (*count < 0)
return;
if ((n & 0xf) < 0xa)
lastRetVal = _putchar('0' + (n & 0xf));
else
lastRetVal = _putchar('A' + (n & 0xf) % 0xa);
if (lastRetVal < 0)
*count = (-1);
else
*count += lastRetVal;
}

/**
 * print_X - print an integer in hexadecimal (uppercase)
 * @args: the va_list with the integer to print as it's next element
 *
 * Return: the number of bytes printed
 */
int print_X(va_list args)
{
int count = 0;
_print_X(va_arg(args, int), &count);
return (count);
}
