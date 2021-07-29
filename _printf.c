#include "holberton.h"
/**
 * _printf - print arguments according to a format
 * @format: a string composed of ordinary characters and format specifications
 *
 * Return: Upon success, this returns the number of characters printed.
 * If an output error is encountered, -1 is returned instead.
 */
int _printf(const char *format, ...)
{
va_list args;
int (*print_func)(va_list);
int char_count, last_ret_val;
if (!format)
return (-1);
va_start(args, format);
for (char_count = 0; *format; ++format)
{
if (*format == '%')
{
if (!format[1])
return (-1);
print_func = get_print_any_func(format[1]);
if (print_func)
{
last_ret_val = print_func(args);
if (last_ret_val < 0)
return (-1);
char_count += last_ret_val;
++format;
continue;
}
last_ret_val = _putchar(*format++);
if (last_ret_val < 0)
return (-1);
char_count += last_ret_val;
}
last_ret_val = _putchar(*format);
if (last_ret_val < 0)
return (-1);
char_count += last_ret_val;
}
va_end(args);
return (char_count);
}
