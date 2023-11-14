#include "main.h"

/**
 * _printf - a function that produces output according to a format.
 *
 * @format: the format string.
 * @...: the arguments passed.
 * Return: the number of characters printed (excluding the
 *  null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			specifier_handler(*format, args);
		}
		else
		{
			_putchar(*format);
		}

		if (*format != '\0')
		{
			format++;
			count++;
		}
	}

	va_end(args);
	return (count);
}
