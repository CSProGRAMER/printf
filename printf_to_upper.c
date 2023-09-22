#include "main.h"

/**
 * printf_to_upper - Convert a string to uppercase
 * @len: The length of the string
 * @str: The string to convert
 *
 * Return: The number of characters printed.
 */
int printf_to_upper(int len, char *str)
{
	int i;

	for (i = 0; i < len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}

	return (write(1, str, len));
}
