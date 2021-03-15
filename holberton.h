#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

/**
* struct handleSpecifier - handle the conversion
* specifiers
* @c: conversion specifier passed with arguments
* @f: function
*/

typedef struct handleSpecifier
{
	char c;
	int (*f)(va_list arguments, int *p);
} con_spe;


int _printf(const char *format, ...);
int _putchar(char character);
int sing_char(va_list selector, int *p);
int (*conversion_specifiers(char c))();
int str_char(va_list selector, int *p);
int percent_sign(va_list selector, int *p);
int print_integer(va_list selector, int *p);

#endif
