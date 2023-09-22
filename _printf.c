#include "main.h"

/**
 * _printf - Produces output according to a format.
 * @format: A character string containing zero or more directives.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printed = 0;

	va_start(args, format);

	if (!format)
		return (-1);

	while (*format)
	{
		if (*format != '%')
		{
			printed += write(1, format, 1);
			format++;
			continue;
		}

		format++;
		if (*format == '\0')
			return (-1);

		if (*format == '%')
		{
			printed += write(1, "%", 1);
			format++;
			continue;
		}

		printed += format_handler(*format, &args);
		format++;
	}

	va_end(args);
	return (printed);
}
