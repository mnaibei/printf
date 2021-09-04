#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * _printf - function that prints anything
 * @format: list of types of arguments passed to the function
 * @...: number of arguments
 * Return: modifiers
 */
int _printf(const char *format, ...)
{
va_list args;
int mods;

mod_t  fmt_list[] = {
{"c", print_char},
{"i", print_digit},
{"d", print_digit},
{"s", print_string},
{"R", print_rot13},
{NULL, NULL}
};

va_start(args, format);

if (format == NULL)
{
return (-1);
}

mods = print_modifiers(format, args, fmt_list);

va_end(args);
return (mods);
}
