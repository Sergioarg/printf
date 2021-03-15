#include "holberton.h"
/**
 * putchar_func - Print a character
 * @character: The character to print
 * Return: always 1
 */
int putchar_func(char character)
{
	write(1, &character, 1);
	return (1);
}
