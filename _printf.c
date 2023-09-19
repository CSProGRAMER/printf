#include "main.h"

/**
 * _printf -printf implementation
 * @format: The format specifier string.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	int printed_chars = 0;
	va_list args;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			printed_chars += format_handler(format, args, printed_chars);
			format++;
		}
		else
		{
			_putchar(*format);
			printed_chars++;
			format++;
		}
	}
	va_end(args);
	return (printed_chars);
}
