#include "holberton.h"

/**
 * _printf - Print Anything (integers, strings, floats, doubles , etc)
 * @format: The part of string
 * Also recive a variadic arguments
 * Return: 0 always
*/
int _printf(const char *format, ...)
{
	int i, j, len;
	char *tmp;
	va_list arguments;

	if (!format)
		return (0);
	va_start(arguments, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				_putchar('\n');
				i++;
			}
			else if (format[i + 1] == 'c')
			{
				_putchar(va_arg(arguments, int));
				_putchar('\n');
				i++;
			}
			else if (format[i + 1] == 's')
			{
				tmp = va_arg(arguments, char *);
				for (j = 0; tmp[j]; j++)
					_putchar(tmp[j]);
				i++;
			}
			else
				_putchar(format[i]);
		}
		else
			_putchar(format[i]);
	}
	return (0);
}
