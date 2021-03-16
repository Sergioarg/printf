#include "holberton.h"
/**
 * conversion_specifiers - convert the specifer according to the case
 * @c: is the char that specifies the case
 * Return: NULL.
 */

int (*conversion_specifiers(char c))()
{
	int i = 0;

	con_spe cs_arr[] = {
		// {'c', sing_char},
		{'s', str_char},
		{'d', print_integer},
		{'i', print_integer},
		{'\0', NULL}
	};

	while (cs_arr[i].c != '\0')
	{
		if (cs_arr[i].c == c)
			return (cs_arr[i].f);
		i++;
	}
	return (NULL);
}
