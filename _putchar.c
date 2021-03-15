#include "holberton.h"
/**
 * _putchar - Print a character
 * @character: The character to print
 * Return: always 1
 */
int _putchar(char character)
{
	return (write(1, &character, 1));
}
