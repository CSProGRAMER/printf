#include "main.h"

/**
 * printf_integer - Print an integer
 * @n: The integer to print
 *
 * Return: The number of characters printed.
 */
int printf_integer(int n)
{
	int printed = 0;
	unsigned int num;

	if (n < 0)
	{
		printed += write(1, "-", 1);
		num = -n;
	}
	else
		num = n;

	if (num / 10)
		printed += printf_integer(num / 10);

	printed += write(1, &"0123456789"[num % 10], 1);
	return (printed);
}
