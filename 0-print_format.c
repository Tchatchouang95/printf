#include "main.h"

/**
 * print_format - checks for the correct format specifier next to the %
 * @format: format specifier
 * @args: list of arguements passed to the elipses
 * Return: length of format string
 */
int print_format(char format, va_list args)
{
	int count = 0;
	char *str, c;

	if (format == '%')
	{
		write(1, &format, 1);
		count++;
	}
	else if (format == 'c')
	{
		c = va_arg(args, int);
		write(1, &c, 1);
		count++;
	}
	else if (format == 's')
	{
		str = va_arg(args, char *);
		if (str == NULL)
			return ("(nil)");
		write(1, str, str_len(str));
		count += str_len(str);
	}
	return (count);
}
