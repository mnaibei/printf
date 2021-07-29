#include "holberton.h"

/**
 * print_S - print a string, outputting non-printable characters in hex
 * @args: the va_list with the string to print as the next element
 *
 * Return: the number of bytes printed
 */
int print_S(va_list args)
{
	int count, last_ret_val;
	char *str = va_arg(args, char *);

	if (!str)
		str = "(null)";

	for (count = 0; *str; ++str)
	{
		if (*str < 0x20)
		{
			if (*str < 0x10)
				last_ret_val = _printf("\\x0");
			else
				last_ret_val = _printf("\\x");
			if (last_ret_val < 0)
				return (-1);

			_print_X(*str, &count);
			if (count < 0)
				return (-1);
		}
		else
		{
			last_ret_val = _putchar(*str);
			if (last_ret_val < 0)
				return (-1);
		}
		count += last_ret_val;
	}
	return (count);
}
