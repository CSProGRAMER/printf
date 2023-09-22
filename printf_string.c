#include "main.h"

/**
 * printf_string - Print a string to stdout
 * @str: The string to print
 *
 * Return: The number of characters printed.
 */
int printf_string(char *str)
{
	int printed = 0;

	while (str && str[printed])
		printed += write(1, &str[printed], 1);

	return (printed);
}
