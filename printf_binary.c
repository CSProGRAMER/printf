#include "main.h"

/**
 * printf_binary - Print an unsigned integer in binary format
 * @n: The unsigned integer to print
 *
 * Return: The number of characters printed.
 */
int printf_binary(unsigned int n)
{
	int printed = 0;
	unsigned int mask = 1 << 31;
	int started = 0;

	while (mask)
	{
		if (n & mask)
		{
			printed += write(1, "1", 1);
			started = 1;
		}
		else if (started)
			printed += write(1, "0", 1);
		mask >>= 1;
	}
	if (!started)
		printed += write(1, "0", 1);
	return (printed);
}
