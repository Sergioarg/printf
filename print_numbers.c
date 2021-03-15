#include "holberton.h"
/**
 * _abs - print the entire value of a int
 * @r: value of the integer
 * Return: entire value of r
 */
int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	return (-r);
}
/**
 * print_integerRecursive - makes a journey of the numbers
 * @n: is the number of the whole allocated
 */
void print_integerRecursive(int n)
{
	if (n == 0)
		return;

	else
	{
		print_integerRecursive(n / 10);
		putchar_func(n % 10 + '0');
	}
}
/**
 * print_integer - Print in the format of integers
 * @selector: condition that you are going to print
 * @p: to use
 * Return: Always 0.
 */
int print_integer(va_list selector, int *p)
{
	(void)p;
	int number = va_arg(selector, int);

	if (number < 0)
	{
		putchar_func('-');
		number = _abs(number);
	}
	print_integerRecursive(number);
	return (0);
}
