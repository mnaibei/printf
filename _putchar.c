#include <unistd.h>

/**
 *_putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 *
 * Desc: First parameter in the write function is the file
 * descriptor of where to
 * write the output, we use one for standard output
 * Second parameter is a null terminated character string of the
 * content to write. We give the address to our char c parameter
 * Last parameter is the number of bytes to write. We have one character
 * we want to write that is 1 byte so we put a 1 as the parameter
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
