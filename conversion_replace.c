#include "holberton.h"

/**
 * sing_char - print single character
 * @selector: condition that you are going to print
 * @p: is the length of the string
 * Return: Always 0.
 */

int sing_char(va_list selector, int *p)
{
	putchar_func(va_arg(selector, int));
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
	char *s = va_arg(selector, char *), *null = "(null)";
	int i;

	if (s == NULL)
	{
		while (i < 6)
		{
			putchar_func(null[i]);
			*p = *p + 1;
			i++;
		}
		return (-1);
	}

	if (*s == '%')
		return (-1);

	for (i = 0; s[i]; i++)
	{
		putchar_func(s[i]);
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
	(void)selector;
	putchar_func('%');
	*p = *p + 1;
	return (0);
}
