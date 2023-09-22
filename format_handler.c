#include "main.h"

/**
 * format_handler - Handle format specifiers
 * @specifier: The format specifier character
 * @args: The va_list of arguments
 *
 * Return: The number of characters printed.
 */
int format_handler(char specifier, va_list *args)
{
	int printed = 0;

	switch (specifier)
	{
		case 'c':
			return (printf_char(va_arg(*args, int)));
		case 's':
			return (printf_string(va_arg(*args, char *)));
		case 'd':
		case 'i':
			return (printf_integer(va_arg(*args, int)));
		case 'u':
			return (printf_unsigned_int(va_arg(*args, unsigned int)));
		case 'o':
			return (printf_octal(va_arg(*args, unsigned int)));
		case 'b':
			return (printf_binary(va_arg(*args, unsigned int)));
		case 'x':
			return (printf_hex(va_arg(*args, unsigned int), 0));
		case 'X':
			return (printf_hex(va_arg(*args, unsigned int), 1));
		case 'p':
			return (printf_address(va_arg(*args, void *)));
		case '%':
			return (write(1, "%", 1));
		default:
			if (specifier == 'r')
				return (write(1, "%r", 2));
			else
				return (-1);
	}
}
