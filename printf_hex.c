#include "main.h"
/**
 * printf_hex - Print an unsigned integer in hexadecimal format
 * @n: The unsigned integer to print
 * @uppercase: 1 for uppercase, 0 for lowercase
 *
 * Return: The number of characters printed.
 */
int printf_hex(unsigned int n, int uppercase)
{
	int printed = 0;
	unsigned int temp = n;
	char hex_digit;
	int i = 0;
	char hex_buffer[9];

	if (n == 0)
	{
		printed += write(1, "0", 1);
		return (printed);
	}

	while (temp > 0)
	{
		hex_digit = (temp % 16 < 10) ? (temp % 16 + '0') : (temp % 16 - 10 + (uppercase ? 'A' : 'a'));
		hex_buffer[i] = hex_digit;
		temp /= 16;
		i++;
	}
	while (i > 0)
	{
		i--;
		printed += write(1, &hex_buffer[i], 1);
	}
	return (printed);
}
