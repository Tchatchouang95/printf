#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: format string
 * Return: length of format string
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			count++;
		}
		else
		{
			format++;
			count += print_format(*format, args);
		}
		format++;
	}
	va_end(args);
	return (count);
}
