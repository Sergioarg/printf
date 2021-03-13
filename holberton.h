#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

typedef struct handleSpecifier
{
	char c;
	int (*f)(va_list percent);
} con_spe;

int _printf(const char *format, ...);
void _putchar(char character);
int sing_char(char c);
char *str_concat(char *s1, char *s2);

#endif