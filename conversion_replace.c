#include "holberton.h"

int sing_char(va_list selector)
{
	_putchar(va_arg(selector, int));
	return 0;
}

int str_char(va_list selector)
{
	char *s = va_arg(selector, char *);
  int i;

	if(*s == '\0')
		return (-1);

	if (*s == '%')
		return (-1);

  for (i = 0; s[i]; i++)
    _putchar(s[i]);

	return (i);
}

int percent_sign(va_list selector)
{
	return (_putchar('%'));
}