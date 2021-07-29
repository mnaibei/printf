#include "holberton.h"

/**
 * get_print_any_func - find print function relative to matching specifier
 * @c: current specifier to compare
 *
 * Return: Number of characters printed
 */
int (*get_print_any_func(char c))(va_list)
{
print_func specs[] = {
	{'c', print_c},
	{'s', print_s},
	{'%', print_percent},
	{'d', print_d},
	{'i', print_d},
	{'b', print_b},
	{'X', print_X},
	{'x', print_x},
	{'o', print_o},
	{'u', print_u},
	{'p', print_p},
	{'S', print_S},
	{ 0, NULL}
};
unsigned int i = 0;

while (specs[i].specifier)
{
if (specs[i].specifier == c)
return (specs[i].f);
i++;
}
return (NULL);
}
