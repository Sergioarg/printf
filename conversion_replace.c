#include "holberton.h"

/**
 * sing_char - print single character
 * @selector: condition that you are going to print
 * @p: is the length of the string
 * Return: Always 0.
 */

int sing_char(va_list c)
{
    char character = (char)va_arg(c, int);
    putchar_func(character);
    return (1);
}

/**
 * str_char - print a string of characters
 * @selector: condition that you are going to print
 * @p: is the length of the string
 * Return: The iterator to count.
 */

int str_char(va_list s)
{
    char *string;
    int i;

    string = va_arg(s, char *);
    if (string == NULL)
    {
        string = "(null)";
    }
    for (i = 0; string[i] != '\0'; i++)
    {
        putchar_func(string[i]);
    }
    return (i);
}
