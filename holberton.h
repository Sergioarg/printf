#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <stdio.h>
/**
 * struct handleSpecifier - define the alias of struct
 * @co: is the char that receives the format
 * @f: is the name of the fuction
 */
typedef struct con_spee
{
	char *co;
	int (*f)(va_list);
} con_spe;

int _printf(const char *format, ...);
int putchar_func(char character);
int sing_char(va_list c);
int (*conversion_specifiers(const char *c, int l))(va_list);
int str_char(va_list s);
int print_integer(va_list i);
int _abs(int r);
int print_integerRecursive(int n, int *p);

#endif
