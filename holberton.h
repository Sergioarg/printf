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
	int (*f)(va_list arguments);
} con_spe;


int _printf(const char *format, ...);
int _putchar(char character);
int sing_char(va_list selector);
int (*conversion_specifiers(char c))();
char *str_concat(char *s1, char *s2);
int str_char(va_list selector);
int percent_sign(va_list selector);

#endif
