#include "holberton.h"

int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	return (-r);
}

void print_integerRecursive(int n)
{
	if (n == 0)
	return;

	else
	{
		print_integerRecursive(n / 10);
		_putchar(n%10 + '0');
	}
}
int print_integer(va_list selector)
{
	int number = va_arg(selector, int);

	if (number < 0)
	{
		_putchar('-');
		number = _abs(number);
	}
	print_integerRecursive(number);
	return (0);
}
