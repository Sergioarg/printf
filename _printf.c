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

	int (*selector)(va_list, int *);

	if (!format || (format[0] == '&' && format[1] == '\0'))
		return (-1);

	va_start(arguments, format);
	p = &len;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{	putchar_func('%');
				i++;
				len++;
			}
			else if (conversion_specifiers(format[i + 1]) != NULL)
			{	len += (conversion_specifiers(format[i + 1])(arguments));
				i++;
			}
			else
			{	putchar_func(format[i]);
				len++;
			}
		}
		else
		{	putchar_func(format[i]);
			len++;
		}
	}
	va_end(arguments);
	return (len);
}
