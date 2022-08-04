#ifndef _VARIADIC_FUNCS_H
#define _VARIADIC_FUNCS_H

#define NIL "(nil)"

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

typedef struct opt
{
	char *opt;
	void (*meth)(va_list);
} opt_t;


void print_all(const char * const format, ...);

#endif
