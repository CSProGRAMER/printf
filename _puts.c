#include "main.h"

/**
 * _puts - Writes a string to stdout.
 * @str: The string to print.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _puts(char *str)
{
	int count = 0;

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}

	return (count);
}
