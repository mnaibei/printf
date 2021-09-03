#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * print_char - function that prints character
 * @argptr: argument list pointer to character to be printed
 * Return: int
 */
int print_char(va_list argptr)
{
char character;

character = va_arg(argptr, int);
_putchar(character);
return (1);
}

/**
 * print_string - function that prints string
 * @argptr: argument list pointer to string to be printed
 * Return: int
 */
int print_string(va_list argptr)
{
char *str;
unsigned int index;

str = va_arg(argptr, char*);

if (str == NULL)
{
str = "(null)";
}

index = 0;
while (str[index])
{
_putchar(str[index]);
index++;
}
return (index);
}

/**
 * print_digit - function that prints integer
 * @argptr: argument list pointer to integer to be printed
 * Return: int
 */
int print_digit(va_list argptr)
{
int num, num_d;
int n = va_arg(argptr, int);
int index = 1, aux = 1;
int last = n % 10;

n = n / 10;
num = n;

if (last < 0)
{
_putchar('-');
num = -num;
n = -n;
last = -last;
index++;
}
if (num > 0)
{
while (num / 10 != 0)
{
aux = aux * 10;
num = num / 10;
}
num = n;
while (aux > 0)
{
num_d = num / aux;
_putchar(num_d + '0');
num = num - (num_d *aux);
aux = aux / 10;
index++;
}
}
_putchar(last + '0');
return (index);
}

/**
 * print_rot13 - encodes a string into rot13
 * @argptr: argument list pointer to string to be printed
 * Return: integer
 */

int print_rot13(va_list argptr)
{
int i;
int j;

char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
char *c, *str;

c = va_arg(argptr, char*);
if (c == NULL)
{
return (0);
}
str = malloc(1024); /* one kilobyte*/
if (str == NULL)
{
return (-1);
}
for (i = 0; c[i] != '\0'; i++)
{
for (j = 0; j < 51; j++)
{
if (c[i] == input[j])
{
str[i] = output[j];
break;
}
else
{
str[i] = c[i];
}
}
}
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
free(str);
return (i);
}
