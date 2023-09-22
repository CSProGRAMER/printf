#include "main.h"

/**
 * printf_base - Convert an unsigned integer to a given base
 * @n: The unsigned integer to convert
 * @base: The base to convert to
 *
 * Return: A string containing the converted value.
 */
char *printf_base(unsigned int n, int base)
{
	char *str;
	int i = 0;

	str = malloc(32 * sizeof(char));
	if (!str)
		return (NULL);

	while (n != 0)
	{
		int remainder = n % base;

		str[i++] = "0123456789ABCDEF"[remainder];
		n = n / base;
	}
	str[i] = '\0';
	return (str);
}
