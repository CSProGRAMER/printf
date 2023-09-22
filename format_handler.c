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
		{
			char c = va_arg(*args, int);
			printed += write(1, &c, 1);
			break;
		}
		case 's':
		{
			char *str = va_arg(*args, char *);
			if (!str)
				str = "(nil)";
			while (*str)
			{
				printed += write(1, str, 1);
				str++;
			}
			break;
		}
		case 'd':
		case 'i':
			printed += printf_integer(va_arg(*args, int));
			break;
		case 'u':
			printed += printf_unsigned_int(va_arg(*args, unsigned int));
			break;
		case 'o':
			printed += printf_octal(va_arg(*args, unsigned int));
			break;
		case 'b':
			printed += printf_binary(va_arg(*args, unsigned int));
			break;
		case 'x':
			printed += printf_hex(va_arg(*args, unsigned int), 0);
			break;
		case 'X':
			printed += printf_hex(va_arg(*args, unsigned int), 1);
			break;
		case 'p':
			printed += printf_address(va_arg(*args, void *));
			break;
		case '%':
			printed += write(1, "%", 1);
			break;
		default:
			if (specifier == 'r')
				printed += write(1, "%r", 2);
			else
				return (-1);
	}

	return (printed);
}
