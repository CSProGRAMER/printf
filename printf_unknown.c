#include "main.h"

/**
 * printf_unknown - Print an unknown format specifier
 * @format: The unknown format specifier
 *
 * Return: The number of characters printed.
 */
int printf_unknown(char format)
{
	return (write(1, &format, 1));
}
