#include "main.h"


/**
 * printf_unsigned - Prints an unsigned integer.
 * @num: The unsigned integer to be printed.
 * @printed: The number of printed characters so far.
 *
 * Return: The updated count of printed characters.
 */
int printf_unsigned_int(unsigned int num, int printed)
{
	int digits = 0;
	unsigned int temp = num;

	do {
		digits++;
		temp /= 10;
	} while (temp != 0);

	if (num == 0)
	{
		_putchar('0');
		printed++;
	}
	else
	{
		char unsigned_str[11];
		int i = 0;

		while (num != 0)
		{
			unsigned_str[i] = (num % 10) + '0';
			num /= 10;
			i++;
		}
		for (i = digits - 1; i >= 0; i--)
		{
			_putchar(unsigned_str[i]);
			printed++;
		}
	}

	return (printed);
}
