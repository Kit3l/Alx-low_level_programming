#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: separator
 * @n: num of parameters
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list parameters;
	char *buffer;

	va_start(parameters, n);

	for (i = 0; i < n; i++)
	{
		buffer = va_arg(parameters, char *);
		printf("%s", buffer ? buffer : NIL);
		if (!separator || i == n - 1)
			continue;

		printf("%s", separator);
	}

	va_end(parameters);
	printf("\n");
}
