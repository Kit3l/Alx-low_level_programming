#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: separator
 * @n: num of parameters
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list parameters;

	va_start(parameters, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(parameters, int));
		if (!separator || i == n - 1)
			continue;

		printf("%s", separator);
	}

	va_end(parameters);
	printf("\n");
}
