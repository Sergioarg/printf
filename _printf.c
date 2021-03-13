#include "holberton.h"

/**
 * _printf - print
 * @format: String
 * Return: 0 or -1
 */
int _printf(const char *format, ...)
{
	int i, len;

	if (!format)
	return (-1);

	for (i = 0; format[i] != '\0'; i++)

	len = i + 1;
	write(1, format, len);
	return (0);
}
