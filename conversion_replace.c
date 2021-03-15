#include "holberton.h"

/**
 * sing_char - print single character
 * @selector: condition that you are going to print
 * @p: is the length of the string
 * Return: Always 0.
 */

int sing_char(va_list selector, int *p)
{
	_putchar(va_arg(selector, int));
	*p = *p + 1;
	return (0);
}

/**
 * str_char - print a string of characters
 * @selector: condition that you are going to print
 * @p: is the length of the string
 * Return: The iterator to count.
 */

int str_char (va_list selector, int *p)
{
	char *s = va_arg(selector, char *);
	int i;

	if (*s == '\0')
		return (-1);

	if (*s == '%')
		return (-1);

	for (i = 0; s[i]; i++)
	{
		_putchar(s[i]);
		*p = *p + 1;
	}
	return (i);
}

/**
 * percent_sign - print a single percentage
 * @selector: condition that you are going to print
 * @p: is the length of the string
 * Return: Always 0.
 */

int percent_sign(va_list selector, int *p)
{
	_putchar('%');
	*p = *p + 1;
	return (0);
}
