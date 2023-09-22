#include "main.h"

/**
 * printf_address - Print a memory address
 * @ptr: The pointer to the memory address
 *
 * Return: The number of characters printed.
 */
int printf_address(void *ptr)
{
	int printed = 0;
	unsigned long int address = (unsigned long int)ptr;
	char address_buffer[17];
	int i, j = 0;
	int leading_zero = 1;

	if (ptr == NULL)
	{
		printed += write(1, "(nil)", 5);
	}
	else
	{
		printed += write(1, "0x", 2);

		for (i = 60; i >= 0; i -= 4)
		{
			unsigned int nibble = (address >> i) & 0xF;

			if (leading_zero && nibble == 0)
				continue;
			address_buffer[j++] = (nibble < 10) ? (nibble + '0') : (nibble - 10 + 'a');
			leading_zero = 0;
		}
		address_buffer[j] = '\0';

		printed += write(1, address_buffer, j);
	}

	return (printed);
}
