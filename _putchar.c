#include <unistd.h>

/**
 * _putchar - write a character
 * @c: the caracter to print
 *
 * Return: not void
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
