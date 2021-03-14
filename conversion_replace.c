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

  for (i = 0; s[i]; i++)
    _putchar(s[i]);

	return (0);
}

int percent_sign(va_list selector)
{
	return (_putchar('%'));
}