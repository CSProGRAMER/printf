#include "main.h"


/**
 * printf_string - Prints a string.
 * @args: The arguments to use.
 * @printed: The number of printed characters so far.
 *
 * Return: The updated count of printed characters.
 */
int printf_string(va_list args, int printed)
{
	char *string = va_arg(args, char *);

	while (*string != '\0')
	{
		_putchar(*string);
		printed++;
		string++;
	}

	return (printed);
}
