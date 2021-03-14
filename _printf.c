#include "holberton.h"
/**
 * _printf - replica of the Printf function
 * @format: references to the desired format to Print
 * Return: Always 0.
 */

int _printf(const char *format, ...)
{
	int i, j, len;
	va_list arguments;
	int (*selector)(va_list);

	if (!format)
		return (-1);

	va_start(arguments, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			selector = conversion_specifiers(format[i + 1]);
			selector(arguments);
			i++;
		}
		else
			_putchar(format[i]);
	}
	va_end(arguments);
	return (0);
}
