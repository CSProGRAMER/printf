#include "main.h"


/**
 * printf_string - Print a string.
 * @str: The string to print.
 * Return: The number of characters printed.
 */
int printf_string(const char *str)
{
	int printed = 0;

	if (!str)
		str = "(nil)";
	while (*str)
	{
		printed += write(1, str, 1);
		str++;
	}

	return printed;
}
