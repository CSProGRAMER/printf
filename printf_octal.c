#include "main.h"


/**
 * printf_octal - Prints the octal representation of an unsigned integer.
 * @num: The number to be printed in octal.
 * @printed: The number of printed characters so far.
 *
 * Return: The updated count of printed characters.
 */
int printf_octal(unsigned int num, int printed)
{
	int oct[100], i = 0, j;

	while (num != 0)
	{
		int remainder = num % 8;

		oct[i] = 48 + remainder;
		i++;
		num /= 8;
	}

	if (i == 0)
	{
		_putchar('0');
		printed++;
	}
	else
	{
		for (j = i - 1; j >= 0; j--)
		{
			_putchar(oct[j]);
			printed++;
		}
	}

	return (printed);
}
