#include "main.h"


/**
 * printf_reverse - Prints a string in reverse.
 * @args: The arguments to use.
 * @printed: The number of printed characters so far.
 *
 * Return: The updated count of printed characters.
 */
int printf_reverse(va_list args, int printed)
{
	char *str = va_arg(args, char *);
	int len = 0, i;

	while (str[len])
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		printed++;
	}

	return (printed);
}
