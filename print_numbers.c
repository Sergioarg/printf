#include "holberton.h"
/**
 * integer_evaluator - evaluates what kind of integer is
 * @n: is the integer to evalue
 * Return: Always 0.
  */
int integer_evaluator(int n)
{
	if (n >= 0 && n <= 9)
		return (n);
	return (0);
}

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
 * @p: print pointer
 * Return: 1.
 */
int print_integerRecursive(int n, int *p)
{
	if (n == '\0')
	{
		return (0);
	}
	else
	{
		print_integerRecursive(n / 10, p);
		*p = *p + 1;
		putchar_func((n % 10) + '0');
	}
	return (1);
}
