#include "main.h"

/**
 * printf_unsigned_int - Print an unsigned integer
 * @n: The unsigned integer to print
 *
 * Return: The number of characters printed.
 */
int printf_unsigned_int(unsigned int n)
{
	int printed = 0;

	if (n / 10)
		printed += printf_unsigned_int(n / 10);

	printed += write(1, &"0123456789"[n % 10], 1);
	return (printed);
}
