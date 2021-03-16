#include "holberton.h"

/**
 * print_integerRecursive - makes a journey of the numbers
 * @n: is the number of the whole allocated
 * Return: 1.
 */
int print_integerRecursive(int n)
{
	if (n == '\0')
	{
		return (0);
	}
	else
	{
		print_integerRecursive(n / 10);
		putchar_func((n % 10) + '0');
	}
	return (1);
}

/**
 * print_integer - print a integer
 * @i: integer to print
 * Return: 1.
 */
int print_integer(va_list i)
{
	int number = va_arg(i, int);

	if (number < 0)
	{
		putchar_func('-');
		number *= -1;
	}

	print_integerRecursive(number);

	return (1);
}
