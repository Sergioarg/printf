#include "holberton.h"
/**
 * _putchar - Print a character
 * @character: The character to print
*/
int _putchar(char character)
{
	return (write(1, &character, 1));
}
