#include "holberton.h"

/**
 * print_c - print a character
 * @arg: the va_list argument
 *
 * Return: the number of bytes printed
 */

int print_c(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}
