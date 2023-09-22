#include "main.h"
/**
 * printf_char - Print a character.
 * @c: The character to print.
 * Return: The number of characters printed.
 */
int printf_char(char c)
{
	return write(1, &c, 1);
}
