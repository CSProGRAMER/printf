#include "main.h"


/**
 * printf_octal - Prints the octal representation of an unsigned integer.
 * @n: The number to be printed in octal.
 *
 * Return: The updated count of printed characters.
 */
int printf_octal(unsigned int n)
{
	int count = 0;

	if (n / 8)
		count += printf_octal(n / 8);

	count += write(1, &"01234567"[n % 8], 1);
	return (count);
}
