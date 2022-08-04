#include "variadic_functions.h"

/**
 * print_char - prints char
 * @parameters: parameters
 */
void print_char(va_list parameters)
{
	printf("%c", va_arg(parameters, int));
}

/**
 * print_int - prints int
 * @parameters: parameters
 */
void print_int(va_list parameters)
{
	printf("%d", va_arg(parameters, int));
}

/**
 * print_float - prints float
 * @parameters: parameters
 */
void print_float(va_list parameters)
{
	printf("%f", va_arg(parameters, double));
}

/**
 * print_string - prints string
 * @parameters: parameters
 */
void print_string(va_list parameters)
{
	char *s;

	s = va_arg(parameters, char *);
	printf("%s", s ? s : NIL);
}


/**
 * print_all - prints anything
 * @format: list of types of args
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	opt_t print[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_list parameters;
	int i, j;
	char *sep = "";

	va_start(parameters, format);
	i = 0;
	while (format && *(format + i))
	{
		j = 0;
		while (print[j].opt && (*(print[j].opt) != *(format + i)))
			j++;

		if (print[j].opt)
		{
			printf("%s", sep);
			print[j].meth(parameters);
			sep = ", ";
		}
		i++;
	}

	va_end(parameters);
	printf("\n");
}
