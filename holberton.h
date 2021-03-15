#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <stdarg.h>
/**
 * struct handleSpecifier - define the alias of struct
 * @c: is the char that receives the format
 * @f: is the name of the fuction
 */
typedef struct handleSpecifier
{
	char c;
	int (*f)(va_list arguments, int *p);
} con_spe;


int _printf(const char *format, ...);
int putchar_func(char character);
int sing_char(va_list selector, int *p);
int (*conversion_specifiers(char c))();
int str_char(va_list selector, int *p);
int percent_sign(va_list selector, int *p);
int print_integer(va_list selector, int *p);
int _abs(int r);
void print_integerRecursive(int n);

#endif
