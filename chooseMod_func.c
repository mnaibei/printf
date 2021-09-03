#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * print_modifiers - function to check the format specifiers
 * @fmt: list of types of arguments passed to the function
 * @argptr: argument list pointer to string to be printed
 * @fmt_list: pointer to a struct containing specifiers
 * Return: int
 */
int print_modifiers(const char *fmt, va_list argptr, mod_t *fmt_list)
{
int index = 0, arg_len = 0, ret = 0;

while (fmt[index] != '\0' && fmt != NULL)
{
if (fmt[index] == '%' && fmt[index + 1] == '\0')
return (-1);
if (fmt[index] == '%' && (fmt[index + 1] == ' ' || fmt[index + 1] != '%'))
{
if (fmt[index + 1] == ' ')
{
index++;
}
while (arg_len < 4)
{
if (fmt[index + 1] == fmt_list[arg_len].mod[0])
{
ret += fmt_list[arg_len].func_mod(argptr);
index++;
break;
}
arg_len++;
}
if (arg_len == 4)
{
ret += _putchar(fmt[index]);
}
}
else if (fmt[index] == '%' && fmt[index + 1] == '%')
{
ret += _putchar('%');
index++;
}
else
{
ret += _putchar(fmt[index]);
}
index++;
}
return (ret);
}
