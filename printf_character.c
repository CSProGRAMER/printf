#include "main.h"

/**
 * printf_character - Print a character
 * @c: The character to print
 *
 * Return: The number of characters printed (1).
 */
int printf_character(int c)
{
	return (write(1, &c, 1));
}
