#include "holberton.h"
/**
 * _printf - replica of the Printf function
 * @format: references to the desired format to Print
 * Return: length of string
 */

int _printf(const char *format, ...)
{
	int i, len = 0;
	int *p;
	va_list arguments;
	int (*selector)(va_list, int*);

	if (!format)
		return (-1);

	va_start(arguments, format);
	p = &len;

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			selector = conversion_specifiers(format[i + 1]);
			selector(arguments, p);
			i++;
		}
		else
		{
			putchar_func(format[i]);
			*p = *p + 1;
		}
	}
	va_end(arguments);

	return (len);

}
