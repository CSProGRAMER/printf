#include "main.h"

/**
 * printf_char - Prints a character.
 * @args: The arguments to use.
 * @printed: The number of printed characters.
 *
 * Return: The updated count of printed characters.
 */
int printf_char(va_list args, int printed)
{
	int character = va_arg(args, int);

	_putchar(character);
	return (printed + 1);
}
